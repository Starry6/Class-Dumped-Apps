@interface AWEUserAttributedLabelViewAccessibilityElement : UIAccessibilityElement
@property (nonatomic) <AWEUserAttributedLabelViewAccessibilityElementDelegate> delegate;
@property (nonatomic) UIView view;
- (id)accessibilityFrame;
- (id)delegate;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)accessibilityActivate;
@end
