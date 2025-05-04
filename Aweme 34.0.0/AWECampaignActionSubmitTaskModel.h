@interface AWECampaignActionSubmitTaskModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString host;
@property (nonatomic) AWECampaignSubmitTaskReqParams reqParams;
@property (nonatomic) NSDictionary dicParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reqParams;
- (void)setReqParams:;
- (id)dicParam;
- (void)setDicParam:;
- (void)setHost:;
- (id)host;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
+ (id)JSONKeyPathsByPropertyKey;
@end
