@interface AVWeakReferencingDelegateStorage : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_delegate;
- (id)init;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)delegateQueue;
- (id)delegate;
- (void)_setDelegateViaWeakReference:;
- (void)invokeDelegateCallbackWithBlock:;
- (void)invokeDelegateCallbackWithBlock:synchronouslyIfDelegateQueueIsQueue:;
- (void)getRetainedDelegate:retainedDelegateQueue:;
- (void)setDelegate:queue:;
@end
