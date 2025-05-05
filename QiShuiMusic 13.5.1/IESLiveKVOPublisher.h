@interface IESLiveKVOPublisher : IESLivePublisher
@property (nonatomic) NSObject target;
@property (nonatomic) NSObject observer;
@property (nonatomic) NSString keyPath;
@property (nonatomic) Q options;
@property (nonatomic) NSMutableArray allRootSubscriptions;
@property (nonatomic) BOOL isAutoUnBind;
- (id)allRootSubscriptions;
- (id)initWithTarget:observer:keyPath:options:autoUnBind:;
- (BOOL)isAutoUnBind;
- (void)setAllRootSubscriptions:;
- (void)setIsAutoUnBind:;
- (void)subscribe:bindingToSubscription:;
- (void)setOptions:;
- (void)setTarget:;
- (unsigned long long)options;
- (void)setKeyPath:;
- (void)setObserver:;
- (id)keyPath;
- (void).cxx_destruct;
- (id)target;
- (id)observer;
@end
