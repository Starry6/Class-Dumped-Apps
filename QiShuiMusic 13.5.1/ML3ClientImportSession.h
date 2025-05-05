@interface ML3ClientImportSession : NSObject
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cancel;
- (BOOL)start;
- (BOOL)finish;
- (id)progress;
- (BOOL)addItems:;
- (void).cxx_destruct;
- (id)_xpcClientConnection;
- (BOOL)removeItems:;
- (id)initWithConfiguration:delegate:;
- (void)sessionFailedToAddItem:completion:;
- (void)sessionFailedToUpdateItem:completion:;
- (void)sessionFailedToRemoveItem:completion:;
- (void)sessionDidUpdateProgress:;
- (id)addItemsReturningResult:;
- (BOOL)updateItems:;
- (id)updateItemsReturningResult:;
- (id)removeItemsReturningResult:;
@end
