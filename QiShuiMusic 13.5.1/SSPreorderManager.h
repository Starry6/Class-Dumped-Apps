@interface SSPreorderManager : NSObject
@property (nonatomic) NSArray itemKinds;
@property (nonatomic) NSArray preorders;
- (void)_connectAsObserver;
- (void)removeObserver:;
- (void)_sendMessageToObservers:;
- (void)_handleMessage:fromServerConnection:;
- (void)reloadFromServer;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (id)preorders;
- (id)initWithItemKinds:;
- (void)cancelPreorders:withCompletionBlock:;
- (id)itemKinds;
- (void)_registerAsObserver;
+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;
@end
