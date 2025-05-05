@interface PLCloudFeedCommentsEntry : PLCloudFeedEntry
@property (nonatomic) NSString entryCloudAssetGUID;
@property (nonatomic) NSOrderedSet entryLikeComments;
@property (nonatomic) NSOrderedSet entryComments;
@property (nonatomic) NSMutableOrderedSet mutableEntryLikeComments;
@property (nonatomic) NSMutableOrderedSet mutableEntryComments;
- (BOOL)shouldBeRemovedFromPhotoLibrary:;
- (id)mutableEntryLikeComments;
- (id)mutableEntryComments;
+ (id)entityName;
@end
