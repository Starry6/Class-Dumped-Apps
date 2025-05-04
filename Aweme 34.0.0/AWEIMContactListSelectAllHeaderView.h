@interface AWEIMContactListSelectAllHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectStateImageView;
@property (nonatomic) UIView bgMaskView;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL canSelect;
@property (nonatomic) <AWEIMContactListSelectAllHeaderViewProtocol> delegate;
- (id)bgMaskView;
- (void)setBgMaskView:;
- (id)selectStateImageView;
- (void)setSelectStateImageView:;
- (void)changeToSelect:canSelect:;
- (void)__didTapOnMaskView;
- (void)setIsSelected:;
- (id)delegate;
- (BOOL)isSelected;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)updateTitle:;
- (BOOL)canSelect;
- (void)setCanSelect:;
+ (id)identifier;
@end
