@interface AWERVLVLanguageViewCell : UICollectionViewCell
@property (nonatomic) UIView container;
@property (nonatomic) UILabel languageLabel;
@property (nonatomic) AWELongVideoMetaLanguageInfoModel languageModel;
- (id)languageLabel;
- (void)setLanguageLabel:;
- (void)setContainer:;
- (id)container;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)languageModel;
- (void)setSelected:;
- (void)setupUI;
- (void)updateWithModel:;
- (void)setLanguageModel:;
@end
