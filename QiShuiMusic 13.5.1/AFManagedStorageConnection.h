@interface AFManagedStorageConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_clearConnection;
- (id)_connection;
- (void)dealloc;
- (void).cxx_destruct;
- (id)domainObjectForKey:;
- (void)setDomainObject:forKey:;
- (id)dataForKey:inKnowledgeStoreWithName:;
- (void)setData:forKey:inKnowledgeStoreWithName:;
- (void)resetKnowledgeStoreWithName:;
- (id)_managedStoreService;
- (id)_managedStoreServiceWithErrorHandler:;
- (id)_synchronousManagedStoreServiceWithErrorHandler:;
@end
