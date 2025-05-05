@interface IESLiveCommonGroupDownloadTask : IESLiveCommonDownloadTask
@property (nonatomic) NSArray operations;
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) NSArray errors;
@property (nonatomic) <IESLiveMonitor> groupMonitor;
- (id)groupMonitor;
- (void)p_addTaskRemoveObserver:;
- (void)p_monitorSubDownloadStatus:groupIdentifier:;
- (void)setGroupMonitor:;
- (void)setupWithOperations:;
- (void)syncTaskFrom:;
- (id)operations;
- (void)setErrors:;
- (void)start;
- (id)initWithOperations:;
- (id)operationQueue;
- (void)resume;
- (void).cxx_destruct;
- (void)setOperations:;
- (id)errors;
- (void)setIdentifier:;
- (void)setOperationQueue:;
- (void)cancelTask;
- (void)setSuspend:;
@end
