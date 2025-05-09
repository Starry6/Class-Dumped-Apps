@interface AWEBinding : NSObject
@property (nonatomic) NSThread hostThread;
@property (nonatomic) NSMutableArray handlerBlockArray;
@property (nonatomic) AWEBindingKVO bindingKVO;
@property (nonatomic) @ receiver;
@property (nonatomic) NSString receiverKeyPath;
@property (nonatomic) NSMutableArray handlerBlockArray;
@property (nonatomic) BOOL boundFlag;
@property (nonatomic) BOOL distinctUntilChangedFlag;
@property (nonatomic) BOOL deliverOnMainThreadFlag;
@property (nonatomic) q skipCounter;
@property (nonatomic) NSThread hostThread;
@property (nonatomic) @? addKVOHandler;
- (id)receiverKeyPath;
- (void)setSkipCounter:;
- (void)_deliverToObject:withValue:;
- (void)_deliverWithParams:;
- (void)addHandler:deylayAddToKVO:;
- (id)addKVOHandler;
- (void)addToKVO;
- (id)bindReusableView:;
- (id)bindingKVO;
- (BOOL)boundFlag;
- (id)deliverOnMainThread;
- (BOOL)deliverOnMainThreadFlag;
- (void)deliverToObject:withValue:;
- (void)deliverWithValue:;
- (id)disposeBy:;
- (BOOL)distinctUntilChangedFlag;
- (id)handlerBlockArray;
- (id)hostThread;
- (id)receive:keyPath:;
- (void)removeFromKVO;
- (void)removeFromKVOByObject:;
- (void)setAddKVOHandler:;
- (void)setBindingKVO:;
- (void)setBoundFlag:;
- (void)setDeliverOnMainThreadFlag:;
- (void)setDistinctUntilChangedFlag:;
- (void)setHandlerBlockArray:;
- (void)setHostThread:;
- (void)setReceiverKeyPath:;
- (long long)skipCounter;
- (id)receiver;
- (id)init;
- (void)addHandler:;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)unbind;
- (void)setReceiver:;
- (void)removeHandler:;
- (id)distinctUntilChanged;
- (id)skip:;
- (void)deliver;
- (id)observe:keyPath:;
+ (id)merge:;
+ (id)combineLatest:;
@end
