@interface WFCoreDataChangeNotification : NSObject
@property (nonatomic) BOOL invalidatedAllObjects;
@property (nonatomic) NSSet updated;
@property (nonatomic) NSSet inserted;
@property (nonatomic) NSSet deleted;
@property (nonatomic) NSInteger processIdentifier;
- (id)deleted;
- (BOOL)hasChanges;
- (id)updated;
- (id)debugDescription;
- (id)initWithDictionaryRepresentation:;
- (int)processIdentifier;
- (id)inserted;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)insertedDescriptors;
- (id)initWithInvalidatedAllObjects:updated:inserted:deleted:processIdentifier:;
- (id)notificationByMergingChangesFromNotification:;
- (BOOL)originatedInCurrentProcess;
- (BOOL)appliesToResultState:;
- (id)updatedDescriptors;
- (id)deletedDescriptors;
- (BOOL)invalidatedAllObjects;
@end
