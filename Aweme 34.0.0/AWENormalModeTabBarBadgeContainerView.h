@interface AWENormalModeTabBarBadgeContainerView : UIView
@property (nonatomic) DUXBadge badge;
@property (nonatomic) UIView animateSnapShotView;
@property (nonatomic) DUXBadge dotBadge;
@property (nonatomic) DUXBadge numberBadge;
@property (nonatomic) DUXBadge textBadge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)hideBadge;
- (id)dotBadge;
- (void)setDotBadge:;
- (void)setNumberBadge:;
- (id)animateSnapShotView;
- (void)setAnimateSnapShotView:;
- (id)createAnimateView;
- (void)performChangeAnimateWithPopAnimation:showAnimation:;
- (id)showBadgeWithStyle:count:text:config:;
- (void)animationDidStop:finished:;
- (id)badge;
- (void).cxx_destruct;
- (void)setBadge:;
- (id)numberBadge;
- (void)setTextBadge:;
- (id)textBadge;
@end
