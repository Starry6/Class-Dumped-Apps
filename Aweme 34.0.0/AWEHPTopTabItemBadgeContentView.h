@interface AWEHPTopTabItemBadgeContentView : UIView
@property (nonatomic) UIView badgeAnchorView;
@property (nonatomic) DUXBadge redDotView;
@property (nonatomic) UIView animateView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (id)showBadgeWithBadgeStyle:badgeConfig:count:text:;
- (void)hideBadge;
- (void)performChangeAnimateWithPopAnimation:showAnimation:;
- (id)redDotView;
- (void)setRedDotView:;
- (id)badgeAnchorView;
- (id)animateView;
- (void)setAnimateView:;
- (id)createBadgeAnimateView;
- (void)setBadgeAnchorView:;
- (id)init;
- (void)animationDidStop:finished:;
- (void).cxx_destruct;
@end
