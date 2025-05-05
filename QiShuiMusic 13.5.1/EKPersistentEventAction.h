@interface EKPersistentEventAction : EKPersistentObject
- (id)externalID;
- (void)setOwner:;
- (id)owner;
- (id)externalRepresentation;
- (void)setExternalID:;
- (id)externalModificationTag;
- (int)entityType;
- (void)setExternalModificationTag:;
- (void)setExternalRepresentation:;
- (id)externalFolderID;
- (void)setExternalFolderID:;
- (id)externalScheduleID;
- (void)setExternalScheduleID:;
+ (id)relations;
+ (Class)meltedClass;
@end
