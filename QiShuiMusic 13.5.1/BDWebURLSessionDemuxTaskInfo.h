@interface BDWebURLSessionDemuxTaskInfo : NSObject
@property (nonatomic) <NSURLSessionDataDelegate> delegate;
@property (nonatomic) NSThread thread;
@property (nonatomic) NSURLSessionDataTask task;
@property (nonatomic) NSArray modes;
- (id)thread;
- (void)setDelegate:;
- (id)task;
- (id)delegate;
- (void).cxx_destruct;
- (void)performBlock:;
- (void)invalidate;
- (id)modes;
- (void)setThread:;
- (void)performBlockOnClientThread:;
- (id)initWithTask:delegate:modes:;
@end
