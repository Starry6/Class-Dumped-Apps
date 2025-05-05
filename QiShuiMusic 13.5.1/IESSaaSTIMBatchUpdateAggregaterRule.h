@interface IESSaaSTIMBatchUpdateAggregaterRule : NSObject
@property (nonatomic) double timeInterval;
@property (nonatomic) q maxCount;
- (long long)maxCount;
- (void)setMaxCount:;
- (void)setTimeInterval:;
- (double)timeInterval;
@end
