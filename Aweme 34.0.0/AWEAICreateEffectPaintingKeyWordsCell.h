@interface AWEAICreateEffectPaintingKeyWordsCell : AWEAIGCKeyWordsBaseCell
@property (nonatomic) UILabel label;
@property (nonatomic) Q cellStatus;
@property (nonatomic) AWEAICreateEffectPaintingKeyWordsModel model;
@property (nonatomic) UIColor selectedColor;
- (void)configCellWithModel:;
- (void)setModel:;
- (void)setLabel:;
- (id)initWithFrame:;
- (void)setSelectedColor:;
- (id)label;
- (id)model;
- (void).cxx_destruct;
- (id)selectedColor;
- (void)setupSubviews;
- (unsigned long long)cellStatus;
- (void)setCellStatus:;
+ (id)identifier;
@end
