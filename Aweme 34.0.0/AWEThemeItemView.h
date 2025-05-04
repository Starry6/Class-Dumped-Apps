@interface AWEThemeItemView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel describeLable;
@property (nonatomic) Q type;
@property (nonatomic) BOOL selected;
- (void)setBottomLineHidden:;
- (id)describeLable;
- (void)setDescribeLable:;
- (BOOL)isSelected;
- (unsigned long long)type;
- (void)setType:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)addTarget:action:;
- (void)setSelected:;
- (id)lineView;
- (void)setLineView:;
- (id)selectedImageView;
- (void)setSelectedImageView:;
- (void)createUI;
+ (id)themeItemViewWithType:title:describe:selected:showLine:;
@end
