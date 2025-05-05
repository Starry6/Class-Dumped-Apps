@interface IESIMUI_SF_SelectedAlphaButton : IESIMUISelectedAlphaButton
@property (nonatomic) NSTimer timer;
@property (nonatomic) q waitTime;
@property (nonatomic) Q vcState;
@property (nonatomic) Q retryIndex;
- (unsigned long long)vcState;
- (void)onTimerFire:;
- (long long)p_getWaitTime;
- (void)p_updateTip;
- (void)setVcState:;
- (void)setWaitTime:;
- (void)startErrorStateLimiation;
- (void)updateViewControllerState:;
- (long long)waitTime;
- (id)init;
- (void)dealloc;
- (void)setTimer:;
- (void).cxx_destruct;
- (id)timer;
- (void)setRetryIndex:;
- (unsigned long long)retryIndex;
@end
