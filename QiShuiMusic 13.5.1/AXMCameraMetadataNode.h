@interface AXMCameraMetadataNode : AXMSourceNode
- (void)triggerWithCameraType:cacheKey:resultHandler:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
