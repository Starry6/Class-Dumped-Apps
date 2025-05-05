@interface SFBadge : UIView
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (void)tintColorDidChange;
- (id)initWithFrame:;
@end
