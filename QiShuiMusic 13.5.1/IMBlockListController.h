@interface IMBlockListController : NSObject
@property (nonatomic) NSOrderedSet imBlockItemList;
@property (nonatomic) @ cmfBlockListUpdatedObserver;
@property (nonatomic) @ cnDatabaseChangedExternallyObserver;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)blockAddress:;
- (id)blockListItems;
- (void)listenToCNNotifications;
- (void)removeCNNotifications;
- (BOOL)itemIsBlocked:;
- (BOOL)addressIsBlocked:;
- (BOOL)blockItem:;
- (void)unblockItem:;
- (void)unblockAddress:;
- (void)_buildBlockList;
- (id)_addressForCMItemRef:;
- (BOOL)_blockCMFItemRef:;
- (void)_unblockCMFItem:;
- (id)imBlockItemList;
- (void)setImBlockItemList:;
- (id)cmfBlockListUpdatedObserver;
- (void)setCmfBlockListUpdatedObserver:;
- (id)cnDatabaseChangedExternallyObserver;
- (void)setCnDatabaseChangedExternallyObserver:;
+ (id)sharedBlockList;
+ (id)_createCMFItemRefWithUnsanitizedAddress:;
@end
