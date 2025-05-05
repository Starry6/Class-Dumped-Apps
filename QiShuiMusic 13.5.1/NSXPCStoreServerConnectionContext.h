@interface NSXPCStoreServerConnectionContext : NSObject
- (void)setManagedObjectContext:;
- (id)managedObjectContext;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)manyToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (id)userInfo;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:onEntity:;
- (void)setNotificationManager:;
- (BOOL)_allowCoreDataFutures;
- (id)auditToken;
- (id)notificationManager;
- (void)setUserInfo:;
- (id)description;
- (id)initWithConnectionInfo:;
- (id)cache;
@end
