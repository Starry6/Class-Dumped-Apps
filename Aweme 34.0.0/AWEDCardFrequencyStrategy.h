@interface AWEDCardFrequencyStrategy : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) NSArray scenes;
@property (nonatomic) AWEDCardFrequencyStatsSelectRange range;
@property (nonatomic) q exposedCount;
@property (nonatomic) q continuousSkipCount;
@property (nonatomic) double workDurationFromRangeEnd;
@property (nonatomic) q limitType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)limitType;
- (long long)exposedCount;
- (void)setExposedCount:;
- (long long)continuousSkipCount;
- (void)setContinuousSkipCount:;
- (double)workDurationFromRangeEnd;
- (void)setWorkDurationFromRangeEnd:;
- (id)range;
- (void)setRange:;
- (id)scenes;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setScenes:;
+ (id)JSONKeyPathsByPropertyKey;
@end
