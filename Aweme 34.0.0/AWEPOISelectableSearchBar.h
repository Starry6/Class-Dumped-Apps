@interface AWEPOISelectableSearchBar : AWECommonSearchBar
@property (nonatomic) Q selectableType;
@property (nonatomic) UILabel selectAreaLabel;
@property (nonatomic) UIImageView upDownArrowImageView;
@property (nonatomic) UIView seperateView;
@property (nonatomic) <AWEPOISelectableSearchBarDelegate> delegate;
@property (nonatomic) NSString selectAreaText;
- (void)p_setupUI;
- (id)seperateView;
- (void)setSeperateView:;
- (void)p_changeSearchBarIconImage;
- (void)p_addSelectableView;
- (id)selectAreaLabel;
- (id)upDownArrowImageView;
- (unsigned long long)selectableType;
- (void)setSelectableType:;
- (void)handleTapSelectAreaGes;
- (id)initWithFrame:selectableType:;
- (void)showSelectableView;
- (void)hideSelectableView;
- (void)setSelectAreaText:;
- (id)selectAreaText;
- (void)rotateArrowImageView;
- (void)setSelectAreaLabel:;
- (void)setUpDownArrowImageView:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
