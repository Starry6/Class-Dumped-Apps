@interface IESECShopGoodsTitleLabel : UILabel
@property (nonatomic) IESECShopGoodsTitleTagView tagView;
@property (nonatomic) double blankWidth;
@property (nonatomic) double tagHeight;
@property (nonatomic) double tagTopOffset;
@property (nonatomic) double lineHeight;
@property (nonatomic) double tagIconFixHeight;
@property (nonatomic) double lineSpace;
- (double)blankWidth;
- (id)generateProperTitle:tagWidth:;
- (double)lineSpace;
- (void)setBlankWidth:;
- (void)setGoodsTitle:;
- (void)setGoodsTitle:headIndex:;
- (void)setGoodsTitle:tagImageList:;
- (void)setLineSpace:;
- (void)setTagHeight:;
- (void)setTagIconFixHeight:;
- (void)setTagTopOffset:;
- (void)setupText:headIndent:;
- (double)tagHeight;
- (double)tagIconFixHeight;
- (double)tagTopOffset;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)lineHeight;
- (void)setLineHeight:;
- (id)tagView;
- (void)setTagView:;
+ (double)calcGoodsTitleLabelHeight:tagImageList:layoutConfig:;
+ (id)generateProperTitle:font:tagWidth:blankWidth:;
+ (id)titleAttributeStringWithText:font:lineBreakMode:headIndent:lineHeight:lineSpace:;
@end
