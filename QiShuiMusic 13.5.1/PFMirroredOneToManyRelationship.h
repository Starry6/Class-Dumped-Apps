@interface PFMirroredOneToManyRelationship : PFMirroredRelationship
- (void)dealloc;
- (BOOL)updateRelationshipValueUsingImportContext:andManagedObjectContext:error:;
- (id)initWithManagedObject:withRecordName:relatedToRecordWithRecordName:byRelationship:;
@end
