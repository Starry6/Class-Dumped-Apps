@interface AWEFeedAnchorContainerView : UIView
@property (nonatomic) BOOL isLokiAnchor;
@property (nonatomic) UIView<AWEAdAttachAreaView> attachTapArea;
@property (nonatomic) UIView childView;
- (void)setHidden:;
- (BOOL)isHidden;
- (BOOL)isLokiAnchor;
- (id)attachTapArea;
- (void)setAttachTapArea:;
- (void)configAttachTapAreaIfNeed:;
- (void)setIsLokiAnchor:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)childView;
- (void)setChildView:;
@end
