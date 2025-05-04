@interface AWEMerchandiseComponentCellSelectBoard : AWEMerchandiseComponentBaseCell
@property (nonatomic) UIView indicatorView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)indicatorView;
- (void)setSelected:;
- (void)setIndicatorView:;
+ (BOOL)isSelectWithModel:filterManager:;
+ (id)identifier;
@end
