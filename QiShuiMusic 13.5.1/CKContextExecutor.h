@interface CKContextExecutor : NSObject
@property (nonatomic) AB done;
@property (nonatomic) @ context;
- (void)dealloc;
- (id)context;
- (void)markReady;
- (void)markIncomplete;
- (id)initWithContext:workItemQueue:completionQueue:timeoutAfter:completionHandler:;
- (void).cxx_destruct;
- (void)_awaitCompletion;
- (void)addWorkItem:;
- (void)addWorkItemToQueue:withWorkItem:andContext:;
- (void)addWorkItem:withContext:;
- (void)addWorkItem:toQueue:;
- (void)markReadyAndAwaitCompletion;
- (BOOL)done;
@end
