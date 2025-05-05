@interface CPLSimpleRecordTargetMapping : CPLRecordTargetMapping
- (void)setTarget:forRecordWithScopedIdentifier:;
- (id)targetForRecordWithScopedIdentifier:;
- (void)enumerateTargetsWithBlock:;
- (BOOL)hasUnknownTargets;
- (void)enumerateUnknownTargetsWithBlock:;
- (void)startTrackingUpdates;
- (BOOL)hasUpdatedTargets;
- (void)enumerateUpdatedTargetsWithBlock:;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargets;
@end
