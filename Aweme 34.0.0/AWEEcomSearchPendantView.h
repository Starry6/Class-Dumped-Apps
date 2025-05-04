@interface AWEEcomSearchPendantView : UIView
@property (nonatomic) UIView<BDXViewContainerProtocol> bdxLynxView;
@property (nonatomic) AWEDoubleColumnSearchActivityModel activityModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)sendEvent:params:;
- (id)activityModel;
- (void)setActivityModel:;
- (void)updateWithActivityModel:;
- (id)bdxLynxView;
- (void)setBdxLynxView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
