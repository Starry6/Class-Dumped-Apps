@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy
- (BOOL)createDestinationInstancesForSourceInstance:entityMapping:manager:error:;
- (BOOL)createRelationshipsForDestinationInstance:entityMapping:manager:error:;
- (BOOL)endEntityMapping:manager:error:;
- (id)unarchiveObjectWithExternalRepresentation:;
@end
