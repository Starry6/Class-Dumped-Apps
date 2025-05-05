@interface LPPartitionMedia : LPMedia
- (id)children;
+ (id)supportedContentTypes;
+ (id)contentTypesForPartitionMedia;
+ (id)primaryMedia;
@end
