@interface AWENearbyDislikeGuideView : UIView
@property (nonatomic) LOTAnimationView longPressGuideAnimationView;
@property (nonatomic) BOOL inDismiss;
@property (nonatomic) UIView parentView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) @? didLongPressBlock;
- (void)p_setupUIWithView:;
- (void)p_longPress:;
- (id)didLongPressBlock;
- (void)setDidLongPressBlock:;
- (void)setLongPressGuideAnimationView:;
- (id)longPressGuideAnimationView;
- (void)p_tap:;
- (BOOL)inDismiss;
- (void)setInDismiss:;
- (id)initWithModel:inView:;
- (void)p_setupUIWithView_old:;
- (void)setModel:;
- (void)show;
- (void)dismiss;
- (id)model;
- (void).cxx_destruct;
- (id)parentView;
- (void)setParentView:;
@end
