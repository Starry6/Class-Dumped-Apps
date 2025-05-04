@interface AWELiveLabelDisplaySettings : AWEBaseApiModel
@property (nonatomic) q mostDisplayTimes;
@property (nonatomic) q displayDuration;
@property (nonatomic) q displayIntervals;
- (void)setDisplayDuration:;
- (long long)displayDuration;
- (long long)mostDisplayTimes;
- (void)setMostDisplayTimes:;
- (long long)displayIntervals;
- (void)setDisplayIntervals:;
+ (id)JSONKeyPathsByPropertyKey;
@end
