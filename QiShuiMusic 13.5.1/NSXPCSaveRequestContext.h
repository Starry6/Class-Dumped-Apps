@interface NSXPCSaveRequestContext : NSObject
- (id)managedObjectContext;
- (void)dealloc;
- (id)initForStore:request:metadata:forceInsertsToUpdates:context:;
@end
