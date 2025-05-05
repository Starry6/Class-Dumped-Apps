@interface PFMirroredRelationship : NSObject
- (BOOL)updateRelationshipValueUsingImportContext:andManagedObjectContext:error:;
+ (BOOL)isValidMirroredRelationshipRecord:values:;
@end
