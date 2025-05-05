@interface NoteChangeObject : NSManagedObject
@property (nonatomic) NoteStoreObject store;
@property (nonatomic) NSNumber changeType;
@property (nonatomic) NSMutableSet noteIntegerIds;
@property (nonatomic) NSMutableSet noteServerIds;
@property (nonatomic) NSMutableSet noteServerIntIds;
@end
