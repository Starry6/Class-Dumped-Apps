@interface IESECGoodsDetailPreActivityComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsActivityNoticeView preActivityNoticeView;
- (id)initWithParameters:style:tracker:;
- (id)preActivityNoticeView;
- (void)setPreActivityNoticeView:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
