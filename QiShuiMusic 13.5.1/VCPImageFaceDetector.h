@interface VCPImageFaceDetector : VCPImageAnalyzer
- (int)analyzePixelBuffer:flags:results:cancel:;
- (int)processTile:results:cancel:;
- (int)aggregateTileResults:tileRect:imageSize:landscape:results:;
- (int)faceDetection:faces:cancel:;
- (BOOL)isDuplicate:withRect:;
+ (id)faceDetector;
+ (BOOL)isLivePhotoKeyFrameEnabled;
@end
