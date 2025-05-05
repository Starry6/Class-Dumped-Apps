@interface IESECGoodsDetailTagsComponentView : IESECGoodsDetailTagsBannerComponentView
- (id)initWithParameters:style:tracker:;
- (void)updateWithParameters:;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
