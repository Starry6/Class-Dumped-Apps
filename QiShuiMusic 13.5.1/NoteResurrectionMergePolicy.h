@interface NoteResurrectionMergePolicy : NSMergePolicy
- (BOOL)accountExists:;
- (id)snapshotFromRecord:;
- (BOOL)resolveConflicts:error:;
- (id)localStoreForNote:;
+ (id)sharedNoteResurrectionMergePolicy;
@end
