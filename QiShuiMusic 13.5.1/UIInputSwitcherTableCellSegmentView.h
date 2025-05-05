@interface UIInputSwitcherTableCellSegmentView : UIView
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL usesDarkTheme;
@property (nonatomic) UILabel label;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIInputSwitcherTableCellBackgroundView backgroundView;
- (id)backgroundView;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)label;
- (BOOL)isSelected;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (BOOL)usesDarkTheme;
- (void)setUsesDarkTheme:;
+ (id)_fontForBiasLabel;
@end
