@interface AWECampaignInfoModel : MTLModel
@property (nonatomic) NSString campaignID;
@property (nonatomic) Q hookTimeInterval;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSString activityType;
@property (nonatomic) NSString activityTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityTag;
- (void)setSchemaURL:;
- (id)schemaURL;
- (unsigned long long)hookTimeInterval;
- (void)setHookTimeInterval:;
- (void)setActivityType:;
- (id)activityType;
- (id)campaignID;
- (void).cxx_destruct;
- (void)setCampaignID:;
- (void)setActivityTag:;
+ (id)JSONKeyPathsByPropertyKey;
@end
