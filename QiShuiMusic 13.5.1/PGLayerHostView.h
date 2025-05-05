@interface PGLayerHostView : UIView
@property (nonatomic) PGHostedWindowHostingHandle hostedWindowHostingHandle;
@property (nonatomic) double cornerRadiusScale;
- (void)dealloc;
- (void)setHostedWindowHostingHandle:;
- (id)hostedWindowHostingHandle;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_manageSharingOfTouchesBetweenClientAndHostContext;
- (double)cornerRadiusScale;
- (void)setCornerRadiusScale:;
@end
