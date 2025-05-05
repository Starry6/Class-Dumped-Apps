@interface CPLRecordTargetMapping : NSObject
@property (nonatomic) BOOL hasUnknownTargets;
@property (nonatomic) NSArray allTargetScopedIdentifiers;
@property (nonatomic) NSArray unknownTargetScopedIdentifiers;
@property (nonatomic) BOOL hasUpdatedTargets;
@property (nonatomic) NSSet updatedTargetScopedIdentifiers;
@property (nonatomic) NSString updatedTargetsDescription;
@property (nonatomic) NSString targetDescriptions;
- (id)init;
- (void).cxx_destruct;
- (void)_setTarget:forRecordWithScopedIdentifier:isUpdate:;
- (void)setTarget:forRecordWithScopedIdentifier:;
- (void)addKnownTarget:forRecordWithScopedIdentifier:;
- (id)targetForRecordWithScopedIdentifier:;
- (id)targetForRecordWithOtherScopedIdentifier:;
- (void)enumerateTargetsWithBlock:;
- (BOOL)hasUnknownTargets;
- (void)enumerateUnknownTargetsWithBlock:;
- (id)allTargetScopedIdentifiers;
- (id)unknownTargetScopedIdentifiers;
- (void)startTrackingUpdates;
- (BOOL)hasUpdatedTargets;
- (void)enumerateUpdatedTargetsWithBlock:;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargetsDescription;
- (id)targetDescriptions;
@end
