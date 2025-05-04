@interface AWEUserProtocolViewAccessibilityElement : UIAccessibilityElement
@property (nonatomic) <AWEUserProtocolViewAccessibilityElementDelegate> delegate;
@property (nonatomic) UIView view;
- (id)accessibilityFrame;
- (id)delegate;
- (id)view;
- (void)setView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)accessibilityActivate;
@end
