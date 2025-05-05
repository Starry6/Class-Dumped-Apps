@interface STConcretePersistentStoreChangeHandler : NSObject
@property (nonatomic) NSPersistentContainer persistentContainer;
@property (nonatomic) NSMutableDictionary lastPersistentHistoryTokenByStoreIdentifier;
- (id)initWithPersistentContainer:;
- (void)savePersistentHistoryToken:forStore:;
- (void)handlePersistentStoreCoordinatorStoresDidChange:;
- (void)handleRemotePersistentStoreDidChange:inContext:;
- (id)persistentContainer;
- (id)lastPersistentHistoryTokenByStoreIdentifier;
- (void).cxx_destruct;
- (id)persistentHistoryTokenForStore:;
@end
