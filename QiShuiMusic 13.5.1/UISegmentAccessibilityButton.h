@interface UISegmentAccessibilityButton : UIButton
@property (nonatomic) UISegment segment;
- (id)hitTest:forEvent:;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (void).cxx_destruct;
- (id)segment;
- (void)setSegment:;
+ (id)buttonWithSegment:;
@end
