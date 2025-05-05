@interface VNCRImageReaderForDocumentsDetector : VNCRImageReaderDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)warmUpSession:withOptions:error:;
+ (id)imageReaderRecognitionOptionsForProcessOptions:;
@end
