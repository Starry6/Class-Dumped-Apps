@interface PFMirroredManyToManyRelationshipV2 : PFMirroredManyToManyRelationship
- (id)initWithRecordID:forRecordWithID:relatedToRecordWithID:byRelationship:withInverse:andType:;
- (id)initWithRecord:andValues:withManagedObjectModel:andType:;
- (void)populateRecordValues:;
+ (BOOL)_isValidMirroredRelationshipRecord:values:;
@end
