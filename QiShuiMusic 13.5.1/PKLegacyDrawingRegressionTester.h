@interface PKLegacyDrawingRegressionTester : NSObject
+ (double)compareLegacyDrawingImage:toConvertedDrawing:;
+ (double)maxStdDevErrorFromResult:;
+ (id)createFilteredImageFromImage:context:filterRadius:;
+ (double)compareLegacyDrawingImage:toConvertedDrawing:debugImagesDirectory:;
+ (double)compareImage:with:drawing:;
+ (id)regressionTestDrawingPathForFile:forClass:;
+ (id)regressionTestImagePathForFile:forClass:;
@end
