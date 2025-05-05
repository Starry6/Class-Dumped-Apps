@interface WKApplicationStateTrackingView : UIView
@property (nonatomic) BOOL isBackground;
@property (nonatomic) UIView _contentView;
- (BOOL)isBackground;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)_contentView;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:;
- (id).cxx_construct;
- (id)initWithFrame:webView:;
- (void)_applicationDidFinishSnapshottingAfterEnteringBackground;
- (void)_willBeginSnapshotSequence;
- (void)_didCompleteSnapshotSequence;
@end
