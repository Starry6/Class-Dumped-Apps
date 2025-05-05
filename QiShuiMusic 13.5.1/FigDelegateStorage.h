@interface FigDelegateStorage : NSObject
@property (nonatomic) @ delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
- (id)init;
- (void)dealloc;
- (id)delegateQueue;
- (id)delegate;
- (void)invokeDelegateCallbackWithBlock:;
- (void)setDelegate:queue:;
@end
