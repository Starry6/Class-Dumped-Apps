@interface PFMirroredManyToManyRelationship : PFMirroredRelationship
- (void)dealloc;
- (id)description;
- (BOOL)updateRelationshipValueUsingImportContext:andManagedObjectContext:error:;
- (id)initWithRecordID:recordType:managedObjectModel:andType:;
+ (BOOL)_isValidMirroredRelationshipRecord:values:;
@end
