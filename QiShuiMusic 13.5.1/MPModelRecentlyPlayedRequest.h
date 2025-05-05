@interface MPModelRecentlyPlayedRequest : MPStoreModelRequest
- (id)newOperationWithResponseHandler:;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
@end
