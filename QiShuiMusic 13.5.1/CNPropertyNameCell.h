@interface CNPropertyNameCell : CNContactCell
@property (nonatomic) CNPropertyGroupItem propertyItem;
@property (nonatomic) UITextField textField;
@property (nonatomic) UIResponder firstResponderItem;
@property (nonatomic) <CNPropertyCellDelegate> delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void)setBackgroundColor:;
- (void)dealloc;
- (id)textField;
- (void)setDelegate:;
- (void)traitCollectionDidChange:;
- (void)contentSizeCategoryDidChange:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setCardGroupItem:;
- (double)minCellHeight;
- (id)constantConstraints;
- (id)propertyItem;
- (void)textFieldChanged:;
- (id)firstResponderItem;
- (void)setPropertyItem:;
- (id)displayStringForValue:;
- (id)placeholderString;
+ (BOOL)shouldIndentWhileEditing;
@end
