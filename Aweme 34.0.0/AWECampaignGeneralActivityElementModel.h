@interface AWECampaignGeneralActivityElementModel : MTLModel
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityTag;
@property (nonatomic) NSString token;
@property (nonatomic) NSArray buttonData;
@property (nonatomic) q delayShowTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityTag;
- (id)buttonData;
- (long long)delayShowTime;
- (void)setDelayShowTime:;
- (void)setButtonData:;
- (void)setActivityType:;
- (id)activityType;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
- (void)setActivityTag:;
+ (id)buttonDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
