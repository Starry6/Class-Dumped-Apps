@interface AWEIMContactListSelectAllHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectStateImageView;
@property (nonatomic) UIView maskView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL canSelect;
@property (nonatomic) <AWEIMContactListSelectAllHeaderViewProtocol> delegate;
- (void)__didTapOnMaskView;
- (void)changeToSelect:canSelect:;
- (id)selectStateImageView;
- (void)setSelectStateImageView:;
- (id)initWithReuseIdentifier:;
- (id)maskView;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (BOOL)isSelected;
- (id)delegate;
- (void).cxx_destruct;
- (void)setIsSelected:;
- (void)setMaskView:;
- (id)titleLabel;
- (void)updateTitle:;
- (BOOL)canSelect;
- (void)setCanSelect:;
+ (id)identifier;
@end
