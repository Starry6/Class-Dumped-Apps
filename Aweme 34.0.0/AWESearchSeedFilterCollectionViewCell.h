@interface AWESearchSeedFilterCollectionViewCell : UICollectionViewCell
@property (nonatomic) double fontSize;
@property (nonatomic) UILabel label;
@property (nonatomic) AWESearchSeedFilterViewUtil configInfo;
- (void)configureUI;
- (void)updateCellConfig;
- (id)defaultSelectedLabelFont;
- (id)defaultUnselectedLabelFont;
- (void)updateContConfiguration:;
- (void)updatePosConfiguration:;
- (void)setLabel:;
- (double)fontSize;
- (id)label;
- (void)setFontSize:;
- (void).cxx_destruct;
- (void)setSelected:;
- (id)configInfo;
- (void)setConfigInfo:;
- (void)updateWithText:;
@end
