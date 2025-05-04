@interface AWEEcommerceSearchStyleLabel : UILabel
@property (nonatomic) {UIEdgeInsets=dddd} edgeInsets;
@property (nonatomic) AWEEcommerceSearchCommonTagModel tagModel;
@property (nonatomic) {AWESearchCornerRadius=dddd} differentCornerRadius;
- (void)setTagModel:;
- (id)tagModel;
- (id)bgGradientLayer;
- (void)configWithTextStruct:;
- (id)differentCornerRadius;
- (void)setDifferentCornerRadius:;
- (void)drawTextInRect:;
- (id)intrinsicContentSize;
- (id)edgeInsets;
- (id)initWithFrame:;
- (void)setEdgeInsets:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (Class)layerClass;
@end
