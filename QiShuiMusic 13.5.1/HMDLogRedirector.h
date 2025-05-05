@interface HMDLogRedirector : NSObject
@property (nonatomic) NSInteger originalStd;
@property (nonatomic) NSInteger stdFd;
@property (nonatomic) {_opaque_pthread_mutex_t=q[56c]} log_mutex;
@property (nonatomic) NSString tag;
@property (nonatomic) NSPipe pipe;
@property (nonatomic) NSFileHandle readHandle;
@property (nonatomic) @? callback;
- (void)setOriginalStd:;
- (id)initWithOriginalStd:AndTag:;
- (id)log_mutex;
- (int)originalStd;
- (id)readHandle;
- (void)redirectNotificationHandle:;
- (void)redirectToAlog:withCallback:;
- (void)setLog_mutex:;
- (void)setReadHandle:;
- (void)setStdFd:;
- (int)stdFd;
- (id)callback;
- (id)pipe;
- (void)setCallback:;
- (id)tag;
- (id)init;
- (void)setTag:;
- (void).cxx_destruct;
- (void)setPipe:;
@end
