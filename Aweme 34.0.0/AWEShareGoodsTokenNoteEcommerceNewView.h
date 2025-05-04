@interface AWEShareGoodsTokenNoteEcommerceNewView : AWEShareTokenNoteBaseCardView
@property (nonatomic) NSString schema;
@property (nonatomic) AWEECShareGoodsContainerView goodsContainerView;
@property (nonatomic) UIView reportContainerNewStyleView;
@property (nonatomic) YYLabel reportLabel;
@property (nonatomic) UIImageView arrowReportImageNewStyleView;
- (void)setupUIWithModel:;
- (void)setReportLabel:;
- (void)trackLoadDuration;
- (void)goToEcommerce;
- (void)setGoodsContainerView:;
- (id)goodsContainerView;
- (id)reportContainerNewStyleView;
- (id)arrowReportImageNewStyleView;
- (void)setReportContainerNewStyleView:;
- (void)setArrowReportImageNewStyleView:;
- (id)schema;
- (void)setSchema:;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)reportLabel;
@end
