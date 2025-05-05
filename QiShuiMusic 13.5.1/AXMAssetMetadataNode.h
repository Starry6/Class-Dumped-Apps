@interface AXMAssetMetadataNode : AXMSourceNode
- (void)triggerWithAssetURL:cacheKey:resultHandler:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
