@interface IESIMCampaignInfoModel : MTLModel
@property (nonatomic) NSString campaignID;
@property (nonatomic) Q hookTimeInterval;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)hookTimeInterval;
- (id)schemaURL;
- (void)setHookTimeInterval:;
- (void)setSchemaURL:;
- (id)campaignID;
- (void).cxx_destruct;
- (void)setCampaignID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
