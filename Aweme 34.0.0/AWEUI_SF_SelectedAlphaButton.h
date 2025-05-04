@interface AWEUI_SF_SelectedAlphaButton : AWEUISelectedAlphaButton
@property (nonatomic) NSTimer timer;
@property (nonatomic) q waitTime;
@property (nonatomic) Q vcState;
@property (nonatomic) Q retryIndex;
- (void)setWaitTime:;
- (void)updateViewControllerState:;
- (void)startErrorStateLimiation;
- (long long)p_getWaitTime;
- (void)onTimerFire:;
- (void)p_updateTip;
- (void)setVcState:;
- (unsigned long long)vcState;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void).cxx_destruct;
- (long long)waitTime;
- (unsigned long long)retryIndex;
- (void)setRetryIndex:;
@end
