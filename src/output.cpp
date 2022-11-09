#include "output.hpp"

void printOut(std::vector<int>& arr, searchType result, std::string srch, std::chrono::microseconds duration)
{
    std::cout << "======================================================" << std::endl;
    std::cout << srch << " search output: number ";
    if (result.idx == -1)
    {
        std::cout << "not found in the list!" << std::endl;
    } 
    else 
    {
        std::cout << arr[result.idx] << " is found at index " << result.idx << std::endl;
        std::cout << "Number of iterations: " << result.iter << std::endl;
        std::cout << "Execution time in microseconds: " << duration.count() << std::endl;
    }
    std::cout << "======================================================" << std::endl;    
}

using namespace sciplot; 

void plotOut(Strings search_types, std::vector<int> iters)
{
    // Create a Plot object
    Plot2D plot;

    // Set the legend
    plot.legend().hide();

    // Set the y label and its range
    plot.ylabel("Iterations");
    //plot.yrange(0.0, 50);

    // Plot the boxes using y values.
    plot.drawBoxes(search_types, iters)
        .fillSolid()
        .fillColor("blue")
        .fillIntensity(0.5);

    // Adjust the relative width of the boxes
    plot.boxWidthRelative(0.75);

    // Create figure to hold plot
    Figure fig = {{plot}};
    // Create canvas to hold figure
    Canvas canvas = {{fig}};

    // Show the plot in a pop-up window
    canvas.show();

    // Save the plot to a PDF file
    //canvas.save("example-boxes-ticklabels.pdf");

}
