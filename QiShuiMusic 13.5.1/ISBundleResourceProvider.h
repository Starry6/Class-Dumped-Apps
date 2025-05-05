@interface ISBundleResourceProvider : ISResourceProvider
@property (nonatomic) NSURL bundleURL;
@property (nonatomic) NSDictionary iconDictionary;
@property (nonatomic) Q options;
@property (nonatomic) NSString templateType;
- (id)bundleURL;
- (void)setBundleURL:;
- (id)symbol;
- (void)setTemplateType:;
- (id)resourceNamed:;
- (id)templateType;
- (void).cxx_destruct;
- (id)iconDictionary;
- (unsigned long long)iconShape;
- (id)iconResource;
- (BOOL)_isAppleResource;
- (BOOL)supportsGraphicIcons;
- (BOOL)onlySupportsGraphicIcons;
- (id)customRecipe;
- (void)resolveResources;
- (id)initWithBundleURL:iconDictionary:options:;
- (id)initWithBundle:options:;
- (void)setIconDictionary:;
@end
