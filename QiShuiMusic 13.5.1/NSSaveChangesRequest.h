@interface NSSaveChangesRequest : NSPersistentStoreRequest
@property (nonatomic) NSSet insertedObjects;
@property (nonatomic) NSSet updatedObjects;
@property (nonatomic) NSSet deletedObjects;
@property (nonatomic) NSSet lockedObjects;
- (void)_setSecureOperation:;
- (unsigned long long)requestType;
- (id)init;
- (id)insertedObjects;
- (void)dealloc;
- (id)deletedObjects;
- (id)initWithInsertedObjects:updatedObjects:deletedObjects:lockedObjects:;
- (BOOL)_secureOperation;
- (id)lockedObjects;
- (id)description;
- (id)updatedObjects;
@end
