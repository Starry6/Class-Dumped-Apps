@interface AWECodeGenDouyinContentPayChargeRecommendConfigInfo : MTLModel
@property (nonatomic) double maxDuration;
@property (nonatomic) double minDuration;
@property (nonatomic) double recommendTrialTime;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMinDuration:;
- (double)recommendTrialTime;
- (void)setRecommendTrialTime:;
- (double)maxDuration;
- (void)setMaxDuration:;
- (double)minDuration;
+ (id)JSONKeyPathsByPropertyKey;
@end
