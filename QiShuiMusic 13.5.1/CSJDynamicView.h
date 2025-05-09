@interface CSJDynamicView : UIView
@property (nonatomic) NSMutableArray videoStateTimerMutableArray;
@property (nonatomic) NSMutableArray timingProtocolArray;
@property (nonatomic) BUTimer videoStateTimer;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoViewFrame;
@property (nonatomic) double videoViewBorderRadius;
@property (nonatomic) CSJDynamicRootView dynamicRootView;
@property (nonatomic) <CSJDynamicViewDelegate> delegate;
@property (nonatomic) BOOL valid;
@property (nonatomic) CSJDynamicViewGlobalModel globalModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dynamicAbstractView:videoMuted:;
- (id)dynamicRootView;
- (void)setVideoStateTimerMutableArray:;
- (id)videoStateTimer;
- (void)associateWithDynamicRootView:;
- (void)dynamicAbstractView:changeVideoStateToStateType:;
- (void)dynamicAbstractView:clickAreaType:userBehaviorType:clickInfo:;
- (void)dynamicAbstractView:videoInfoFrame:;
- (id)initWithGlobalModel:;
- (void)interstitialWebviewInCloseAbstractView:;
- (void)openPrivacyAbstractView:;
- (void)pbu_adAnalysisData;
- (void)pbu_renderDidFinish;
- (void)pbu_videoStateWithPlayDuration:stopped:;
- (id)pbu_videoViewInView:;
- (void)registerTimingInDynamicAbstractView:timingProtocol:;
- (void)registerVideoStateTimerInDynamicAbstractView:;
- (void)removeTimingInDynamicAbstractView:timingProtocol:;
- (void)removeVideoStateTimerInDynamicAbstractView:;
- (void)renderWithBeforeSuccessBlock:;
- (void)safeDelegate_dynamicView_adAnalysisDataWithParams:;
- (void)safeDelegate_dynamicView_changeVideoStateWithParams:;
- (void)safeDelegate_dynamicView_clickEventWithParams:;
- (id)safeDelegate_dynamicView_getCurrentVideoState;
- (void)safeDelegate_dynamicView_interstitial_webview_close;
- (void)safeDelegate_dynamicView_muteVideoWithParams:;
- (void)safeDelegate_dynamicView_openPrivacy;
- (void)safeDelegate_dynamicView_renderDidFinishWithParams:;
- (void)safeDelegate_dynamicView_show_SKOverlay;
- (void)safeDelegate_dynamicView_skipVideo;
- (void)setDynamicRootView:;
- (void)setTimingProtocolArray:;
- (void)setVideoStateTimer:;
- (void)setVideoViewBorderRadius:;
- (void)setVideoViewFrame:;
- (void)showSKOverlayInDynamicAbstractView:;
- (void)skipInDynamicAbstractView:;
- (void)startVideoStateTimer;
- (void)stopVideoStateTimer;
- (id)timingProtocolArray;
- (void)updateWithDarkMode:;
- (void)updateWithOriginShow:destShow:;
- (void)videoStateTimerAction;
- (id)videoStateTimerMutableArray;
- (double)videoViewBorderRadius;
- (id)videoViewFrame;
- (void)dealloc;
- (BOOL)valid;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)videoView;
- (id)globalModel;
- (void)setGlobalModel:;
@end
