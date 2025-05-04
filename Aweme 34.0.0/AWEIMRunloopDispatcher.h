@interface AWEIMRunloopDispatcher : NSObject
@property (nonatomic) ^{__CFRunLoopObserver=} observer;
@property (nonatomic) ^{__CFRunLoopObserver=} beginObserver;
@property (nonatomic) NSMutableArray taskQueue;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)p_addObserver;
- (void)p_removeObserver;
- (id)beginObserver;
- (void)setBeginObserver:;
- (id)p_addTask:;
- (id)p_runloopMode;
- (void)p_runloopDidCall;
- (id)init;
- (void)dealloc;
- (BOOL)isTracking;
- (id)observer;
- (id)taskQueue;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)setTaskQueue:;
- (void)setIsTracking:;
+ (id)addTask:;
+ (id)shared;
@end
