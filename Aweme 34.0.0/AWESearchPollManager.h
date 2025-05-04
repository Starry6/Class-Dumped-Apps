@interface AWESearchPollManager : NSObject
@property (nonatomic) <AWEHttpTask> task;
@property (nonatomic) q status;
@property (nonatomic) NSString url;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? pollCallBack;
- (void)tryRollRequest;
- (void)pollRequest;
- (void)resultRequest:;
- (id)pollCallBack;
- (void)setPollCallBack:;
- (void)poll;
- (void)setTask:;
- (id)init;
- (void)setUrl:;
- (void)setStatus:;
- (id)task;
- (void).cxx_destruct;
- (long long)status;
- (id)params;
- (id)url;
- (void)start;
- (void)pause;
- (void)setParams:;
@end
