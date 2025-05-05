@interface BDXBridgeExecutor : NSObject
@property (nonatomic) NSCache handleMethodNameCache;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)callHandlerWithMessage:;
- (BOOL)canHandleMessage:;
- (void)handleMessage:resultHandler:;
- (id)handleMethodNameCache;
- (void)setHandleMethodNameCache:;
- (void)updateMessageNamespace:;
- (BOOL)useMainThreadHandleMessage:;
- (id)initWithContainer:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
- (long long)priority;
+ (Class)lazyRegister;
+ (void)setLazyRegister:;
@end
