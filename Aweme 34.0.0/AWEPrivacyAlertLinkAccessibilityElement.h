@interface AWEPrivacyAlertLinkAccessibilityElement : UIAccessibilityElement
@property (nonatomic) <AWEPrivacyAlertLinkAccessibilityElementDelegate> delegate;
@property (nonatomic) UIAccessibilityElement element;
- (id)accessibilityFrame;
- (id)delegate;
- (void)setElement:;
- (void).cxx_destruct;
- (id)element;
- (void)setDelegate:;
- (BOOL)accessibilityActivate;
@end
