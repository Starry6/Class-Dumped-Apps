@interface PLPersonContactInfoMigrator : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)migratePersonContactInfoInPhotoLibrary:;
- (void)migratePersonContactInfoInContext:;
- (id)enumerateResultsWithIncrementalSaveUsingFetchRequest:inContext:withBlock:;
- (void)migratePerson:;
- (void)updateNameOfPerson:withContact:;
- (void)populateMatchingDictionaryOfPerson:withContact:;
+ (id)migrationQueue;
+ (void)migratePersonContactInfoInPhotoLibrary:;
@end
