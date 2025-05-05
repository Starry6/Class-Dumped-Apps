@interface IESECGoodsDetailActivityEventComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsActivityBanner activityEventView;
@property (nonatomic) q componentsViewStyle;
- (id)activityEventView;
- (long long)componentsViewStyle;
- (id)initWithParameters:style:tracker:;
- (void)setActivityEventView:;
- (void)setComponentsViewStyle:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
