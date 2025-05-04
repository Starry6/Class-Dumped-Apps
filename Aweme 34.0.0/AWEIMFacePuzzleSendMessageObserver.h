@interface AWEIMFacePuzzleSendMessageObserver : NSObject
@property (nonatomic) NSMutableDictionary tasks;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} mutex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iesim_didReceiveSendMessageResponse:;
- (void)iesim_didReceiveAsyncSendMessageResponse:;
- (void)setMutex:;
- (void)addTaskID:task:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)mutex;
- (void)setTasks:;
- (id)tasks;
+ (id)shareInstance;
@end
