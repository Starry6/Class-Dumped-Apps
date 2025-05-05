@interface IESIMALMOwnPlayerVideoEngineTTNet : NSObject
@property (nonatomic) TTHttpTask runningTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configTaskWithURL:completion:;
- (void)configTaskWithURL:params:headers:completion:;
- (void)invalidAndCancel;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (id)runningTask;
- (void)setRunningTask:;
@end
