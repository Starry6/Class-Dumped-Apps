@interface SFBadgeContainerView : UIView
@property (nonatomic) BOOL showsBadge;
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL positionsBadgeRelativeToLayoutMargins;
@property (nonatomic) UIColor badgeTintColor;
- (id)contentView;
- (void)setShowsBadge:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)showsBadge;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setBadgeTintColor:;
- (void)pulse;
- (BOOL)positionsBadgeRelativeToLayoutMargins;
- (void)setPositionsBadgeRelativeToLayoutMargins:;
- (id)badgeTintColor;
@end
