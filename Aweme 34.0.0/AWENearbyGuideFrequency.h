@interface AWENearbyGuideFrequency : AWEBaseApiModel
@property (nonatomic) q dayRange;
@property (nonatomic) q guideTimes;
@property (nonatomic) q maxGuideTimes;
@property (nonatomic) q intervalDay;
@property (nonatomic) NSString impressionType;
@property (nonatomic) NSString objectIndex;
@property (nonatomic) NSString objectType;
- (id)objectIndex;
- (void)setObjectIndex:;
- (long long)guideTimes;
- (long long)dayRange;
- (long long)maxGuideTimes;
- (long long)intervalDay;
- (void)setDayRange:;
- (void)setGuideTimes:;
- (void)setMaxGuideTimes:;
- (void)setIntervalDay:;
- (void)setImpressionType:;
- (id)impressionType;
- (id)objectType;
- (void).cxx_destruct;
- (void)setObjectType:;
+ (BOOL)automaticallyDefaultMapping;
@end
