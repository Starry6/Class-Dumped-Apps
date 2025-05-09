@interface AWEPublishRetryViewManager : NSObject
@property (nonatomic) UIView<AWEPublishRetryViewProtocol> cnRetryView;
@property (nonatomic) UIView<AWEPublishRetryViewProtocol> livePlaybackErrorView;
@property (nonatomic) UIView<AWEPublishRetryViewProtocol> cnReplaceMusicErrorRetryView;
@property (nonatomic) BOOL launched;
@property (nonatomic) BOOL fromSecondVerify;
@property (nonatomic) NSError error;
@property (nonatomic) NSString errorStageType;
@property (nonatomic) UIView contextView;
@property (nonatomic) NSString retryTaskId;
@property (nonatomic) AWEPublishBaseTask taskV2;
@property (nonatomic) BOOL retryFlag;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didBeginWithInfo:;
- (void)task:didAppendWithInfo:;
- (void)task:didEndWithResult:error:;
- (void)task:didResumeAtStage:;
- (void)didFinishLogoutWithUid:;
- (BOOL)retryFlag;
- (void)setRetryFlag:;
- (id)retryTaskId;
- (id)p_enterFrom;
- (void)showRetryViewWhenLaunch;
- (id)p_title:;
- (id)toastAnchorView;
- (void)setErrorStageType:;
- (void)cancelProductDetectPostWithTask:;
- (id)taskV2;
- (id)cnRetryView;
- (BOOL)fromSecondVerify;
- (void)onPublishFailedDraftEdit:;
- (void)p_showSecondVerifyCompletePublishRetryView:;
- (void)retryWithParams:;
- (void)p_getAndValidateRetryId:;
- (void)shouldShowRetryViewWithTask:didEndWithResult:error:;
- (void)showReplaceMusicPublishRetryViewWithTask:;
- (unsigned long long)p_retryViewType:;
- (BOOL)enablePublishRetryViewOptimize;
- (id)customRetryViewConfigWithError:;
- (id)errorStageType;
- (id)p_repository;
- (id)p_subTitle:;
- (id)p_buttonTitle:;
- (id)retryViewWithType:title:subTitle:buttonTitle:;
- (void)p_closeTrackEvent;
- (void)setCnRetryView:;
- (void)p_postShowNote;
- (void)fetchCoverImageWithTaskId:completion:;
- (void)setTaskV2:;
- (void)setRetryTaskId:;
- (void)setFromSecondVerify:;
- (id)livePlaybackErrorView;
- (void)setLivePlaybackErrorView:;
- (id)cnReplaceMusicErrorRetryView;
- (void)setCnReplaceMusicErrorRetryView:;
- (void)p_postHideNote;
- (void)showlivePlaybackErrorViewIfNeeded;
- (void)p_showNormalRetryView:;
- (void)p_shouldShowRetryViewWithTask:didEndWithResult:error:;
- (BOOL)shouldShowLivePlaybackErrorViewIfNeededWithTask:didEndWithResult:;
- (BOOL)shouldShowReplaceMusicPublishRetryViewIfNeededWithTask:didEndWithResult:;
- (void)p_showRetryViewIfNeeded;
- (BOOL)p_removeDraftIfNeeded:;
- (id)consistentRetryId;
- (void)p_observeTask:;
- (void)showRetryViewIfNeeded;
- (id)init;
- (BOOL)isShowing;
- (void)dealloc;
- (void)setError:;
- (void)dismiss;
- (void)dismissWithCompletion:;
- (void).cxx_destruct;
- (id)error;
- (BOOL)launched;
- (void)setLaunched:;
- (id)contextView;
- (BOOL)showRetryButton;
- (void)setIsShowing:;
- (void)listen;
- (void)cancelAndDismiss;
+ (id)shared;
@end
