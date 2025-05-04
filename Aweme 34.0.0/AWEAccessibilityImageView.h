@interface AWEAccessibilityImageView : UIImageView
@property (nonatomic) @? accessibilityDidBecomeFocused;
@property (nonatomic) @? accessibilityDidLoseFocused;
- (void)setAccessibilityDidBecomeFocused:;
- (id)accessibilityDidBecomeFocused;
- (id)accessibilityDidLoseFocused;
- (void)setAccessibilityDidLoseFocused:;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
@end
