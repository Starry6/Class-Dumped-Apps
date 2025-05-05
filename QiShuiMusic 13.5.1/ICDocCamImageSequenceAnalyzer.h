@interface ICDocCamImageSequenceAnalyzer : NSObject
- (void)dealloc;
- (void)finish;
- (void).cxx_destruct;
- (id)initWithOptions:callback:;
- (void)addFrame:metaData:frameOptions:rectangleRequest:pixelFocalLength:cameraIntrinsicData:;
@end
