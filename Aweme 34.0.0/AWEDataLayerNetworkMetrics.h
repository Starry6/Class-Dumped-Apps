@interface AWEDataLayerNetworkMetrics : NSObject
@property (nonatomic) double serializationTime;
@property (nonatomic) double modelizationTime;
- (double)serializationTime;
- (double)modelizationTime;
- (void)setModelizationTime:;
- (void)setSerializationTime:;
@end
