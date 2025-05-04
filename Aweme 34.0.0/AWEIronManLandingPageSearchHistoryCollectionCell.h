@interface AWEIronManLandingPageSearchHistoryCollectionCell : UICollectionViewCell
@property (nonatomic) UILabel textLabel;
@property (nonatomic) BOOL useV2;
- (void)awe_themeDidChange:;
- (BOOL)useV2;
- (void)setUseV2:;
- (void)useV2Style;
- (double)preferedWidthForText:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)updateText:;
- (void)setUpUI;
@end
