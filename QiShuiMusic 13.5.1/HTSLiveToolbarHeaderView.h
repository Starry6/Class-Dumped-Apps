@interface HTSLiveToolbarHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) BOOL isItemSelect;
@property (nonatomic) UIView bottomLineView;
- (BOOL)isItemSelect;
- (void)setIsItemSelect:;
- (void)updateGroupTitle:;
- (void)updateGroupTitleColor:;
- (void)updateGroupTitleFont:;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)bottomLineView;
- (void)setBottomLineView:;
@end
