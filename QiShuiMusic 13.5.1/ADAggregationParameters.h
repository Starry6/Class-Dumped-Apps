@interface ADAggregationParameters : NSObject
@property (nonatomic) I aggregationSize;
@property (nonatomic) double maxPointCloudAge;
- (BOOL)ar_isEqualToParameters:;
- (unsigned int)aggregationSize;
- (double)maxPointCloudAge;
- (void)setMaxPointCloudAge:;
- (void)setAggregationSize:;
@end
