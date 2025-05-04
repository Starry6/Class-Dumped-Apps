@interface AWEFeedRelatedVideoCardPlayInteractionView : UIView
@property (nonatomic) UIImageView iconView;
- (void)showPauseIcon;
- (void)hidePauseIcon;
- (BOOL)ifPauseIconHidden;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
