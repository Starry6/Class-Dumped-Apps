@interface NSXPCStoreServerPerConnectionCache : NSObject
@property (nonatomic) NSPersistentStoreCoordinator coordinator;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)manyToOnePrefetchRequestForRelationshipNamed:onEntity:;
- (id)initWithCoordinator:;
- (void)dealloc;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:onEntity:;
- (id)coordinator;
@end
