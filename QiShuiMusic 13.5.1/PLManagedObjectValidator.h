@interface PLManagedObjectValidator : NSObject
+ (id)validateManagedObject:;
+ (BOOL)validateAllObjectsWithEntityClass:inManagedObjectContext:resultHandler:;
+ (BOOL)validateAllObjectsUsingManagedObjectContext:resultHandler:;
+ (id)_entityClassesToValidate;
@end
