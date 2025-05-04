@interface AWETeenLongPressGuideManager : NSObject
@property (nonatomic) UIView containerView;
@property (nonatomic) LOTAnimationView pressView;
@property (nonatomic) UILabel guidingLabel;
@property (nonatomic) BOOL isShowingGuide;
@property (nonatomic) @? longPressBlock;
- (void)p_setupUI;
- (id)longPressBlock;
- (void)setLongPressBlock:;
- (void)p_addGesture;
- (void)showLongPressGuide;
- (BOOL)isShowingGuide;
- (void)setIsShowingGuide:;
- (void)p_setupBind;
- (id)pressView;
- (id)guidingLabel;
- (void)p_animationBegin;
- (void)dismissLongPressGuide;
- (void)swipeAction:;
- (void)setPressView:;
- (void)setGuidingLabel:;
- (void)longPressAction:;
- (id)init;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)tapAction:;
@end
