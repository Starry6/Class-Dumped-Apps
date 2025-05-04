@interface AWEShareSaveTitleTableViewCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEShareSaveTableViewCellDelegate> shareDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)updateWithViewModel:;
@end
