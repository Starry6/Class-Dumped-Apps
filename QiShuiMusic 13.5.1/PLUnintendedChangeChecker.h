@interface PLUnintendedChangeChecker : NSObject
- (id)init;
- (void)checkForUnintendedChangeOnMergeConflicts:withBlock:;
- (void)checkForUnintendedChangesDuringeSave:withBlock:;
- (void).cxx_destruct;
- (void)_checkForUnintendedChangesOnObject:withBlock:;
- (void)_checkForUnintendedMomentChangesOnObject:withBlock:;
- (void)_checkForUnintendedCPLChangesOnObject:withBlock:;
- (void)_checkForUnintendedChangesOnObject:withEntity:unexpectedKeys:block:;
+ (BOOL)shouldCheckForUnintendedChanges;
+ (void)checkForUnintendedChangeOnMergeConflicts:withBlock:;
+ (void)checkForUnintendedChangesDuringeSave:withBlock:;
@end
