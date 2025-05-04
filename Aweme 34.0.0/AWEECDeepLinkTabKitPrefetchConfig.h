@interface AWEECDeepLinkTabKitPrefetchConfig : MTLModel
@property (nonatomic) BOOL enableCFShortLinkTransform;
@property (nonatomic) NSArray rules;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableCFShortLinkTransform;
- (void)setEnableCFShortLinkTransform:;
- (id)rules;
- (void)setRules:;
- (void).cxx_destruct;
+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
