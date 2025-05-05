@interface NSEntityMigrationPolicy : NSObject
- (BOOL)beginEntityMapping:manager:error:;
- (BOOL)createDestinationInstancesForSourceInstance:entityMapping:manager:error:;
- (BOOL)endInstanceCreationForEntityMapping:manager:error:;
- (BOOL)createRelationshipsForDestinationInstance:entityMapping:manager:error:;
- (BOOL)endRelationshipCreationForEntityMapping:manager:error:;
- (BOOL)performCustomValidationForEntityMapping:manager:error:;
- (BOOL)endEntityMapping:manager:error:;
- (id)_nonNilValueOrDefaultValueForAttribute:source:destination:;
@end
