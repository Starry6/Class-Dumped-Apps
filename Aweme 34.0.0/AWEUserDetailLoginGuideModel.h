@interface AWEUserDetailLoginGuideModel : MTLModel
@property (nonatomic) NSNumber maxCount;
@property (nonatomic) NSNumber dailyMaxCount;
@property (nonatomic) NSNumber exitDays;
@property (nonatomic) NSNumber continuousShowCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dailyMaxCount;
- (void)setDailyMaxCount:;
- (id)exitDays;
- (void)setExitDays:;
- (id)continuousShowCount;
- (void)setContinuousShowCount:;
- (void)setMaxCount:;
- (id)maxCount;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
