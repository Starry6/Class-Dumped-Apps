@interface PLModelMigrationActionUtility : NSObject
+ (long long)removeOrphanedObjectsWithAction:managedObjectContext:fetchRequest:error:;
+ (long long)updateExtendedAttributesWithAction:managedObjectContext:fetchRequest:useObjectIDResumeMarker:error:;
+ (long long)removeFromDuplicatesWithAction:managedObjectContext:fetchRequest:requiresTokenReset:error:;
+ (long long)resetDuplicateProcessingWithAction:managedObjectContext:error:;
@end
