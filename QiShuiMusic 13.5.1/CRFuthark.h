@interface CRFuthark : NSObject
+ (id)detectTextInImage:options:;
+ (id)detectTextInImage:withMaxNumScales:options:;
+ (id)detectTextInImage:withMaxNumScales:withThresholdingAlgorithm:options:;
+ (id)detectAndRecognizeTextInImage:options:;
+ (id)detectAndRecognizeTextInImage:options:withProgressHandler:;
+ (id)detectAndRecognizeTextInImage:withMaxNumScales:options:withProgressHandler:;
+ (id)runFutharkOnImage:recognizeFeatures:options:;
+ (id)runFutharkOnImage:recognizeFeatures:withMaxNumScales:withThresholdingAlgorithm:options:withProgressHandler:;
@end
