@interface ISBiometricOptInOperation : ISOperation
@property (nonatomic) BOOL promptUser;
@property (nonatomic) NSString topicName;
@property (nonatomic) NSString userAgent;
@property (nonatomic) @? resultBlock;
- (id)userAgent;
- (void)setUserAgent:;
- (id)init;
- (void)run;
- (id)resultBlock;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (void)_loadURLBag;
- (id)topicName;
- (BOOL)promptUser;
- (void)setPromptUser:;
- (void)_performOptInDialogMetricsWithResult:error:;
- (BOOL)_performPasscodeDialogOperationWithError:;
- (BOOL)_performOptInDialogOperationWithError:;
- (void)_updateTouchIDSettingsForAccount:;
- (id)_newSourceByStartingTimeoutTimer;
- (void)setTopicName:;
@end
