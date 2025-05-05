@interface WBSCyclerService : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)identifier;
- (id)_descriptionForErrorCode:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)_errorWithCode:;
- (void)setTestTargetEndpoint:reply:;
- (void)setValue:forConfigurationKey:reply:;
- (void)startCyclingFromBeginning:reply:;
- (void)stopCyclingWithReply:;
- (void)sendRequestToTestSuite:reply:;
- (void)fetchStatusWithReply:;
- (void)fetchLogsWithReply:;
- (void)fetchLastErrorWithReply:;
- (id)_startCyclingFromBeginning:;
- (void)_setTestSuiteName:reply:;
- (void)_setSeed:reply:;
- (void)_setMaximumIterationCount:reply:;
- (void)_finishedWithResult:error:;
- (void)_postFinishNotificationWithError:;
@end
