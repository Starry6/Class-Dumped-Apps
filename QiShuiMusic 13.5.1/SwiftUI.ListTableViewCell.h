@interface SwiftUI.ListTableViewCell : UITableViewCell
@property (nonatomic) BOOL isAccessibilityElement;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (id)initWithCoder:;
- (id)sizeThatFits:;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (void)setIsAccessibilityElement:;
- (void)_bridgedUpdateConfigurationUsingState:;
@end
