@interface AWECFMuniments : NSObject
@property (nonatomic) @ task;
@property (nonatomic) AWECFFracas request;
@property (nonatomic) NSArray moduleResponseList;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) NSError error;
@property (nonatomic) NSMutableArray retryTasks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModuleResponseList:;
- (id)initWithURLTask:;
- (id)retryTasks;
- (void)setRetryTasks:;
- (id)moduleResponseList;
- (void)setCancelled:;
- (void)setTask:;
- (void)setError:;
- (id)task;
- (BOOL)isCancelled;
- (void)cancel;
- (void).cxx_destruct;
- (id)error;
- (void)setRequest:;
- (id)request;
@end
