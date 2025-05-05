@interface IESECListKitBundleConfig : MTLModel
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) NSString minSupportAppVersion;
@property (nonatomic) NSArray preloadItems;
@property (nonatomic) IESECListKitAPIConfig apiConfig;
@property (nonatomic) IESECListKitExperimentConfig experimentConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiConfig;
- (id)experimentConfig;
- (id)minSupportAppVersion;
- (id)preloadItems;
- (void)setApiConfig:;
- (void)setExperimentConfig:;
- (void)setMinSupportAppVersion:;
- (void)setPreloadItems:;
- (void)setBundleVersion:;
- (id)bundleVersion;
- (void).cxx_destruct;
+ (id)experimentConfigJSONTransformer;
+ (id)apiConfigJSONTransformer;
+ (id)preloadItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
