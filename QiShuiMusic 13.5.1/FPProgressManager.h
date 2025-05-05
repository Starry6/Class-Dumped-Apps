@interface FPProgressManager : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)attachProgressToItemsIfNeeded:;
- (void)registerCopyProgress:forItemID:;
- (void)removeCopyProgressForItemID:;
- (void)removeDownloadProgressForItemID:;
- (id)removeCopyProgress:;
- (id)copyProgressForItem:;
- (id)downloadProgressForItem:;
- (id)uploadProgressForItem:;
- (id)_progressForItem:usingProgressMap:;
+ (id)defaultManager;
@end
