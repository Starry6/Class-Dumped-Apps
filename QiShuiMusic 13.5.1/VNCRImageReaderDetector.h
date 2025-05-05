@interface VNCRImageReaderDetector : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (BOOL)completeInitializationForSession:error:;
- (id)cachedImageReader;
- (void)setCachedImageReader:;
- (BOOL)isCRImageReaderViableAfterError:;
- (id)newImageReaderAndReturnError:;
- (id)_observationsForImageReaderOutput:requestRevision:error:;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)_imageReaderInitializationOptionsForCreationOptions:error:;
+ (id)imageReaderRecognitionOptionsForProcessOptions:;
+ (id)supportedLanguagesForProcessOptions:error:;
@end
