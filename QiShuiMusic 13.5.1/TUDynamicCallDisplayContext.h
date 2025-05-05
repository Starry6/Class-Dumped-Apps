@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) CXCallDirectoryManager callDirectoryManager;
@property (nonatomic) <TUDynamicCallDisplayContextDelegate> delegate;
- (id)init;
- (void)setDelegate:;
- (id)serialQueue;
- (id)initWithCoder:;
- (id)callDirectoryManager;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)setSerialQueue:;
- (id)initWithCall:contactIdentifier:serialQueue:;
- (id)initWithCall:contactIdentifier:serialQueue:contactsDataSource:;
- (id)initWithDisplayContext:call:serialQueue:;
- (void)_initializeSynchronousStateWithCall:contactIdentifier:contactsDataProvider:;
- (void)_initializeAsynchronousStateWithCall:;
- (void)setCallDirectoryManager:;
@end
