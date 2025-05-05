@interface SFUnifiedBarButton : SFUnifiedBarItem
@property (nonatomic) NSString accessibilityIdentifier;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString title;
@property (nonatomic) NSAttributedString attributedTitle;
@property (nonatomic) @? action;
- (id)attributedTitle;
- (id)action;
- (void)setImage:;
- (void)setTitle:;
- (void)setAttributedTitle:;
- (void)setAction:;
- (void)setAccessibilityIdentifier:;
- (id)view;
- (id)title;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)image;
- (void)_performAction;
- (id)initWithImage:action:;
@end
