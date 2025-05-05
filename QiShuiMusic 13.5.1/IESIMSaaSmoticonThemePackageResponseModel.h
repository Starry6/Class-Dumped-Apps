@interface IESIMSaaSmoticonThemePackageResponseModel : MTLModel
@property (nonatomic) NSArray resources;
@property (nonatomic) NSNumber status_code;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resources;
- (void)setResources:;
- (void).cxx_destruct;
- (void)setStatus_code:;
- (id)status_code;
+ (id)resourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
