@interface PLUpdatedOrderKeys : NSObject
@property (nonatomic) BOOL isObservingOrderKeys;
- (id)init;
- (void)persistentStoreDidUpdateOrderKeys:;
- (id)_persistentStoresForContext:;
- (BOOL)isObservingOrderKeys;
- (BOOL)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:;
- (id)getAndClearUpdatedOrderKeys;
- (void).cxx_destruct;
- (BOOL)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:;
@end
