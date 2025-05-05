@interface IESECGoodsDetailTagsBannerComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) NSArray cachedViews;
@property (nonatomic) UIStackView container;
- (void)setCachedViews:;
- (id)cachedViews;
- (id)initWithParameters:style:tracker:;
- (void)setupSubviews:;
- (void)updateSubviewsDelegate;
- (void)updateWithParameters:;
- (void)setContainer:;
- (id)container;
- (void).cxx_destruct;
@end
