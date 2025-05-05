@interface IESLivePrivilegeHonorLevelModel : IESLiveDynamicMTLModel
@property (nonatomic) BOOL showLevelPanel;
@property (nonatomic) NSString advertisement;
@property (nonatomic) NSString detailPageUrl;
@property (nonatomic) NSString detailText;
@property (nonatomic) NSArray notice;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dictionary;
+ (id)modelFromSetting:;
+ (id)noticeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
