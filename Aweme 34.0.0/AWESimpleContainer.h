@interface AWESimpleContainer : NSObject
@property (nonatomic) AWESimpleContainer parent;
@property (nonatomic) NSMutableDictionary services;
@property (nonatomic) NSMutableDictionary messages;
@property (nonatomic) NSObject<OS_dispatch_queue> isolationQueue;
- (id)resolveObject:;
- (id)getObservers:;
- (id)initWithParentContainer:;
- (void)registerWeakInstance:forProtocol:;
- (void)addObserver:forMessage:;
- (void)registerWeakInstance:forClass:;
- (void)registerRetainedInstance:forClass:;
- (void)registerRetainedInstance:forProtocol:;
- (id)stringFromClassOrProtocol:;
- (void)removeObserver:forMessage:;
- (void)setServices:;
- (id)services;
- (void)setParent:;
- (id)init;
- (id)isolationQueue;
- (id)parent;
- (id)messages;
- (void)setIsolationQueue:;
- (void).cxx_destruct;
- (void)setMessages:;
@end
