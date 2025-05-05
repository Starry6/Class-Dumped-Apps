@interface PLThumbnailIndexes : NSObject
- (id)init;
- (id)getAvailableThumbnailIndexesWithCount:inLibrary:;
- (void)recycleThumbnailIndexes:timestamp:;
- (void)getAvailableThumbnailIndexesWithCount:inLibrary:handler:;
- (void).cxx_destruct;
- (void)getAvailableThumbnailIndexesFromLibrary:;
+ (void)recycleThumbnailIndexes:inLibrary:timestamp:;
+ (void)getAvailableThumbnailIndexesInLibrary:withCount:handler:;
+ (void)recycleThumbnailIndexes:inLibrary:;
+ (id)occupiedThumbnailIndexesWithLibrary:fetchTimestampToUpdate:;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:;
+ (void)getAvailableThumbnailIndexInLibrary:withHandler:;
@end
