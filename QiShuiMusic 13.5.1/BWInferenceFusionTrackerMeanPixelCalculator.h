@interface BWInferenceFusionTrackerMeanPixelCalculator : NSObject
- (void)dealloc;
- (id)initWithCommandQueue:;
- (void)asyncMeanPixelForBuffer:completionHandler:;
@end
