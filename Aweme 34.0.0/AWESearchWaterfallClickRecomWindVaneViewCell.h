@interface AWESearchWaterfallClickRecomWindVaneViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imgView;
@property (nonatomic) UILabel wordLabel;
- (id)wordLabel;
- (void)setWordLabel:;
- (void)setImgView:;
- (id)imgView;
- (id)subStrWithString:;
- (double)wordLabelFontSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)sizeWithText:;
- (void)updateWithModel:;
+ (id)identifier;
@end
