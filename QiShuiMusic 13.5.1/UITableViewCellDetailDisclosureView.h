@interface UITableViewCellDetailDisclosureView : UIControl
@property (nonatomic) UIButton accessoryButton;
@property (nonatomic) UIColor accessoryTintColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSemanticContentAttribute:;
- (id)sizeThatFits:;
- (id)accessoryTintColor;
- (void).cxx_destruct;
- (void)setAccessoryTintColor:;
- (void)removeTarget:action:forControlEvents:;
- (void)addTarget:action:forControlEvents:;
- (id)accessoryButton;
- (id)initWithTarget:action:cell:buttonType:shouldReverseLayoutDirection:;
- (void)_updateDisclosureChevronImage;
@end
