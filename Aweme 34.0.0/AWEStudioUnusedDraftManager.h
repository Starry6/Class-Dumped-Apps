@interface AWEStudioUnusedDraftManager : NSObject
@property (nonatomic) NSMutableDictionary draftTimeCache;
- (void)processDrafts;
- (id)draftTimeCache;
- (void)saveSoftDeleteTimeForDirectory:;
- (void)clearSoftDeleteTimeForDirectory:;
- (void)rollbackAllPendingDeleteDrafts;
- (void)softDeleteUnusedDrafts;
- (void)deleteExpiredPendingDrafts;
- (BOOL)isDraftUnused:;
- (void)softDeleteDraft:;
- (id)loadSoftDeleteTimeForDirectory:;
- (void)moveDraftToTmpDirectory:;
- (void)rollbackPendingDeleteDraft:;
- (void)setDraftTimeCache:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
