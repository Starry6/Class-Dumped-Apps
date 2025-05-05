@interface STTestSyncableSubObject : NSManagedObject
@property (nonatomic) BOOL active;
@property (nonatomic) NSString identifier;
@property (nonatomic) STTestSyncableObject root;
@property (nonatomic) <STSerializableManagedObject> syncableRootObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)syncableRootObject;
@end
