@interface NotesMigrationManager : NSObject
- (BOOL)migrateNotesStoreAtURL:storeType:managedObjectModel:options:error:;
- (BOOL)areStoreMetadata:matchingEntityVersionsInModel:;
- (BOOL)migrateNotesStoreAtURL:storeType:options:sourceModel:destinationModel:mappingModel:error:;
@end
