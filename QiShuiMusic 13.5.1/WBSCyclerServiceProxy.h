@interface WBSCyclerServiceProxy : NSObject
@property (nonatomic) @? connectionInvalidationHandler;
@property (nonatomic) @? errorHandler;
- (id)init;
- (void)dealloc;
- (id)errorHandler;
- (void)setErrorHandler:;
- (void).cxx_destruct;
- (id)_cyclerProxy;
- (void)setTestTargetEndpoint:reply:;
- (void)setValue:forConfigurationKey:reply:;
- (void)startCyclingFromBeginning:reply:;
- (void)stopCyclingWithReply:;
- (void)sendRequestToTestSuite:reply:;
- (void)fetchStatusWithReply:;
- (void)fetchLogsWithReply:;
- (void)fetchLastErrorWithReply:;
- (id)connectionInvalidationHandler;
- (void)setConnectionInvalidationHandler:;
@end
