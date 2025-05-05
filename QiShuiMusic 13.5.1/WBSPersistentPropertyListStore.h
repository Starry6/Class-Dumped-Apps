@interface WBSPersistentPropertyListStore : NSObject
@property (nonatomic) @? createEmptyStoreHandler;
@property (nonatomic) @? validateLoadedStoreHandler;
- (id)dateForKey:;
- (id)dataForKey:;
- (void)setObject:forKey:;
- (id)numberForKey:;
- (id)_objectForKey:ofClass:;
- (void)_loadDataIfNecessary;
- (void)setValidateLoadedStoreHandler:;
- (id)allKeys;
- (void)saveStoreSynchronously;
- (id)_dataRepresentation;
- (id)createEmptyStoreHandler;
- (id)stringForKey:;
- (id)initWithBackingStoreURL:fileResourceValues:;
- (void)saveAndCloseStoreSynchronously;
- (id)arrayForKey:;
- (id)_existingSavedData;
- (id)objectForKey:;
- (void).cxx_destruct;
- (id)validateLoadedStoreHandler;
- (id)initWithBackingStoreURL:;
- (void)setCreateEmptyStoreHandler:;
- (void)_prepareEmptyStore;
- (void)clearStoreSynchronously;
- (id)dictionaryForKey:;
@end
