@interface PLDisconnectedManagedObjectContext : PLManagedObjectContext
- (BOOL)isDatabaseCreationContext;
- (void)performBlockAndWait:;
- (void)setPhotoLibrary:;
- (void)performBlock:;
+ (BOOL)shouldHavePhotoLibrary;
+ (BOOL)canMergeRemoteChanges;
@end
