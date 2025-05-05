@interface IESECGoodsDetailLogisticsComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECTitleLabel logisticsLabel;
- (id)initWithParameters:style:tracker:;
- (id)logisticsLabel;
- (void)setLogisticsLabel:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
