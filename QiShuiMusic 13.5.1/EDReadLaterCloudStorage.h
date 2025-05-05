@interface EDReadLaterCloudStorage : NSObject
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) EDPersistenceHookRegistry hookRegistry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_keyFormessage:;
- (id)cloudStorageReadLaterDateForMessage:;
- (id)initWithMutableDictionary:hookRegistry:;
- (void)persistenceDidChangeReadLaterDate:messages:changeIsRemote:generationWindow:;
- (void)removeEntryForMessage:;
- (void)persistenceDidUpdateDisplayDateForMessages:changeIsRemote:generation:;
- (void).cxx_destruct;
- (void)addEntryForMessage:date:;
- (id)hookRegistry;
- (void)updateDisplayDateForMessage:displayDate:;
- (id)initWithHookRegistry:;
- (id)_messageHashForKey:;
- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:deletedItems:;
- (id)messagePersistence;
@end
