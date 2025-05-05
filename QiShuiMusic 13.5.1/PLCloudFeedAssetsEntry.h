@interface PLCloudFeedAssetsEntry : PLCloudFeedEntry
@property (nonatomic) NSOrderedSet entryAssets;
@property (nonatomic) NSMutableOrderedSet mutableEntryAssets;
- (BOOL)shouldBeRemovedFromPhotoLibrary:;
- (id)mutableEntryAssets;
+ (id)entityName;
@end
