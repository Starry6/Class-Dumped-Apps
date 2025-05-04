@interface AWEPOIDetailCommentTagsCell : UICollectionViewCell
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) BOOL ugcTagAB;
@property (nonatomic) AWEPOIUgcButtonSkinConfig buttonSkinConfig;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)updateWithUgcTagModel:;
- (void)updateDisplayWithModel:;
- (BOOL)ugcTagAB;
- (id)buttonSkinConfig;
- (void)setUgcTagAB:;
- (void)setButtonSkinConfig:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)updateWithModel:;
+ (id)labelTextWithModel:;
+ (double)itemWidthWithModel:;
+ (id)itemSizeWithModel:;
+ (id)ugcItemSizeWithModel:;
+ (double)itemHeight;
@end
