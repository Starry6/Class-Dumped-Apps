@interface CKGenericTemplateListResponse : CKBaseResponseModel
@property (nonatomic) NSDictionary recommendTemplates;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString regionKey;
@property (nonatomic) NSString panelId;
@property (nonatomic) NSString panelKey;
@property (nonatomic) NSString name;
@property (nonatomic) NSString iconUri;
@property (nonatomic) NSDictionary dataMap;
- (id)iconUri;
- (id)panelId;
- (id)dataMap;
- (void)generateRecommendTemplates:;
- (id)panelKey;
- (id)recommendTemplates;
- (id)regionKey;
- (void)setRecommendTemplates:;
- (id)appId;
- (void).cxx_destruct;
- (id)name;
+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
