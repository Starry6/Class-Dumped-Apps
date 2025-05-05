@interface CNContactCardFieldPickerCell : UITableViewCell
@property (nonatomic) BOOL displaysValue;
@property (nonatomic) CNContactCardFieldItem item;
- (id)item;
- (void)setSelected:animated:;
- (id)init;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setConfiguration;
- (id)attributedDisplayValueForItem:;
- (BOOL)displaysValue;
- (void)setDisplaysValue:;
@end
