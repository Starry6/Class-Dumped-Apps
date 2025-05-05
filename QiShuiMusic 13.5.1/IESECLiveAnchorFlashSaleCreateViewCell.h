@interface IESECLiveAnchorFlashSaleCreateViewCell : UITableViewCell
@property (nonatomic) UILabel propertyLabel;
@property (nonatomic) UITextField textField;
@property (nonatomic) UIView separatorView;
@property (nonatomic) IESECLiveAnchorCreateFlashSaleItem item;
@property (nonatomic) <IESECLiveAnchorFlashSaleCreateViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)propertyLabel;
- (void)setItem:showWarn:;
- (void)setPropertyLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (id)item;
- (BOOL)textFieldShouldReturn:;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidEndEditing:;
- (id)separatorView;
- (id)textField;
- (void)setDelegate:;
- (void)setTextField:;
- (void)setItem:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setSeparatorView:;
@end
