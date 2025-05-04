@interface AWEFormatInteractionModeApi : AWEFormatBaseApi
@property (nonatomic) Q switchDigitalModeRetryIndex;
@property (nonatomic) NSTimer switchDigitalModeRetryTimer;
@property (nonatomic) BOOL retryEnable;
@property (nonatomic) NSArray retryIntervals;
- (void)requestSwitchDigitalInteractionModeWithParams:requestSource:finish:;
- (BOOL)retryEnable;
- (void)p_requestSwitchDigitalInteractionModeWithParams:requestSource:retry:finish:;
- (void)cancelSwitchDigitalInteractionModeRetry;
- (unsigned long long)switchDigitalModeRetryIndex;
- (void)retrySwitchDigitalInteractionModeIfNeededWithParams:requestSource:finish:error:responseModel:;
- (BOOL)shouldRetrySwitchModeRequestForError:;
- (void)setSwitchDigitalModeRetryIndex:;
- (id)switchDigitalModeRetryTimer;
- (void)setSwitchDigitalModeRetryTimer:;
- (id)retryErrorCodeList;
- (void)cancelAllTimer;
- (id)init;
- (void).cxx_destruct;
- (id)retryIntervals;
- (void)setRetryIntervals:;
@end
