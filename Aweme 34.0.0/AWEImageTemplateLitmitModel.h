@interface AWEImageTemplateLitmitModel : MTLModel
@property (nonatomic) NSString templateVersion;
@property (nonatomic) NSArray templateFeatures;
@property (nonatomic) NSString templatePlatform;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateFeatures;
- (void)setTemplateFeatures:;
- (id)templatePlatform;
- (void)setTemplatePlatform:;
- (void).cxx_destruct;
- (id)templateVersion;
- (void)setTemplateVersion:;
+ (id)JSONKeyPathsByPropertyKey;
@end
