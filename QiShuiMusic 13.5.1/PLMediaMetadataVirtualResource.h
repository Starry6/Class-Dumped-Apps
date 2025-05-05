@interface PLMediaMetadataVirtualResource : PLVirtualResource
- (long long)dataLength;
- (long long)estimatedDataLength;
- (id)initWithAsset:resourceType:version:recipeID:dataLength:;
@end
