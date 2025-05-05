@interface FRCOpticalFlowEstimator : NSObject
@property (nonatomic) Q flowWidth;
@property (nonatomic) Q flowHeight;
- (void)dealloc;
- (void)allocateResources;
- (void)releaseResources;
- (void).cxx_destruct;
- (unsigned long long)flowWidth;
- (unsigned long long)flowHeight;
- (id)initWithUsage:;
- (long long)opticalFlowFrom:to:flow:;
- (long long)opticalFlowsFrom:to:forwardFlow:backwardFlow:;
- (id)opticalFlowFrom:to:;
- (id)opticalFlowsFrom:to:;
@end
