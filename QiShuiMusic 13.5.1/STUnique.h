@interface STUnique : NSObject
@property (nonatomic) <STPersistenceControllerProtocol> persistenceController;
- (void)newResolveConflictsBetweenLocalDeltas:cloudDeltas:;
- (id)historyTokenForAuthor:fromStore:;
- (void)setPersistenceController:;
- (BOOL)areLocalChangesInterestingWithError:;
- (BOOL)addHistoryToken:forAuthor:toMetadataForStore:error:;
- (void).cxx_destruct;
- (BOOL)migrateWithExportNeeded:error:;
- (BOOL)migrateWithError:;
- (void)resolveConflictsBetweenLocalDeltas:cloudDeltas:;
- (id)persistenceController;
- (id)initWithPersistenceController:;
+ (id)localToCloudMapping;
+ (id)cloudToLocalMapping;
+ (id)mirroredEntityNames;
+ (Class)_internalClassForSerializableClassName:;
@end
