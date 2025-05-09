@interface AWEProgressLoadingView : UIView
@property (nonatomic) UIView weakBaseView;
@property (nonatomic) BOOL allowUserInteract;
@property (nonatomic) UIImageView progressView;
@property (nonatomic) UIView progressLayerWrappedView;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) NSString title;
@property (nonatomic) double progress;
@property (nonatomic) BOOL cancelable;
@property (nonatomic) @? cancelBlock;
- (id)_createBaseView;
- (void)_setupSelfFrame;
- (void)_removeBaseViewIfNeeded;
- (void)_showOnView:animated:;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (BOOL)allowUserInteract;
- (void)allowUserInteraction:;
- (id)progressLayerWrappedView;
- (void)setAllowUserInteract:;
- (void)setProgressLayerWrappedView:;
- (void)setWeakBaseView:;
- (void)showAnimated:afterDelay:;
- (void)showOnView:animated:;
- (id)weakBaseView;
- (void)setStatus:;
- (void)dismissAnimated:;
- (void)_removeObservers;
- (void)dealloc;
- (void)setCancelBlock:;
- (void)_addObservers;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void)cancelButtonClicked:;
- (void)setCancelable:;
- (void)setProgress:;
- (void)setType:;
- (void)setProgressView:;
- (void)setTitle:;
- (void)applicationDidEnterBackground:;
- (double)progress;
- (long long)type;
- (id)title;
- (BOOL)cancelable;
- (id)cancelBlock;
- (void).cxx_destruct;
- (long long)status;
- (void)setCancelButton:;
- (id)titleLabel;
- (id)progressView;
- (id)cancelButton;
- (void)applicationWillEnterForeground:;
- (void)_updateProgress;
- (void)_showAnimated:;
- (id)progressLabel;
- (void)setProgressLabel:;
- (double)circleWidth;
- (id)initWithType:title:;
- (id)progressLayer;
- (void)setProgressLayer:;
- (void)showAnimated:;
@end
