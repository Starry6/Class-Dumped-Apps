@interface IESECGoodsDetailFullReturnBannerComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) NSDictionary fullReturnDict;
@property (nonatomic) IESECFullReturnBannerView fullReturnBannerView;
- (id)fullReturnBannerView;
- (id)fullReturnDict;
- (id)initWithParameters:style:tracker:;
- (void)openFullReturn;
- (void)setFullReturnBannerView:;
- (void)setFullReturnDict:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
