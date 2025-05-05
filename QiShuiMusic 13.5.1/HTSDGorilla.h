@interface HTSDGorilla : NSObject
@property (nonatomic) @ task;
@property (nonatomic) HTSDChimpanzee request;
@property (nonatomic) NSArray moduleResponseList;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSError error;
@property (nonatomic) NSMutableArray retryTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithURLTask:;
- (id)moduleResponseList;
- (id)retryTasks;
- (void)setModuleResponseList:;
- (void)setRetryTasks:;
- (void)setCancelled:;
- (void)cancel;
- (BOOL)isCancelled;
- (void)setError:;
- (id)task;
- (id)error;
- (id)request;
- (void)setTask:;
- (void).cxx_destruct;
- (void)setRequest:;
@end
