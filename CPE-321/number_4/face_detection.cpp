#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // Load the pre-trained cascade classifier for face detection
    cv::CascadeClassifier faceCascade;
    faceCascade.load("/usr/share/opencv4/haarcascades/haarcascade_frontalface_alt.xml");


    // Load the image
    cv::Mat image = cv::imread("ronaldo.jpg");

    // Convert the image to grayscale
    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);

    // Detect faces in the image
    std::vector<cv::Rect> faces;
    faceCascade.detectMultiScale(gray, faces);

    // Draw rectangles around detected faces
    for (const auto& face : faces) {
        cv::rectangle(image, face, cv::Scalar(255, 0, 0), 2);
    }

    // Save the image with detected faces to a file
    cv::imwrite("output_with_faces.jpg", image);

    return 0;
}
