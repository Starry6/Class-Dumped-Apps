@interface ARDepthPointCloudCoalescer : NSObject
@property (nonatomic) ADAggregationParameters aggregationParameters;
- (id)init;
- (void)flush;
- (void).cxx_destruct;
- (id)initWithAggregationParameters:;
- (void)_commonInit:calibration:;
- (void)addDepthPointCloudData:;
- (id)depthPointCloudWithPose:imageData:;
- (id)aggregationParameters;
@end
