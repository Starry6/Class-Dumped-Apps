@interface UIDynamicCatalogColor : UIDynamicColor
- (id)_debugCatalogBundleIdentifier;
- (unsigned long long)hash;
- (void)_setDebugName:;
- (id)initWithName:assetManager:genericColor:;
- (void)encodeWithCoder:;
- (id)_debugName;
- (void).cxx_destruct;
- (id)_resolvedColorWithTraitCollection:;
- (void)_setDebugCatalogBundleIdentifier:;
- (id)description;
- (id)_initForNibEncodingWithName:genericColor:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
