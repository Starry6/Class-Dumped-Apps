@interface AWESearchPOICitySelectionCell : UICollectionViewCell
@property (nonatomic) UILabel cityNameLabel;
- (void)setCityNameLabel:;
- (void)updateUIWithModel:isSelected:;
- (id)cityNameNormalStateTextColor;
- (id)cityNameSelectedStateTextColor;
- (void)setIsSelected:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)cityNameLabel;
+ (double)cellMinWidth;
+ (double)cityNameLeftSpacing;
+ (id)cityNameNormalStateFont;
+ (double)cityNameRightSpacing;
+ (id)cityNameSelectedStateFont;
+ (double)cellHeight;
@end
