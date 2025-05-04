@interface AWEDiscoverDGrayScaleTimestampModel : AWEBaseApiModel
@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
- (double)startTimestamp;
- (double)endTimestamp;
- (void)setStartTimestamp:;
- (void)setEndTimestamp:;
+ (id)JSONKeyPathsByPropertyKey;
@end
