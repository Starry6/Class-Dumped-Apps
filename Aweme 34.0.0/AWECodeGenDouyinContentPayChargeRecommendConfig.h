@interface AWECodeGenDouyinContentPayChargeRecommendConfig : MTLModel
@property (nonatomic) NSArray recommendTrialTimeList;
@property (nonatomic) double recommendTrialTimeStart;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)recommendTrialTimeList;
- (void)setRecommendTrialTimeList:;
- (double)recommendTrialTimeStart;
- (void)setRecommendTrialTimeStart:;
- (void).cxx_destruct;
+ (id)recommendTrialTimeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
