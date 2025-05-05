@interface IESECGoodsDetailBottomNewCountDownTipCell : IESECGoodsDetailBottomNewTipCell
@property (nonatomic) IESECTextWithIconElement tipModel;
@property (nonatomic) NSString template;
@property (nonatomic) NSString pageIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)goodsDetailActivityDidUpdateCountdown:goodsDetailUID:;
- (void)goodsDetailActivityStateDidChanged:goodsDetailUID:;
- (id)initWithFrame:tipModel:template:identifier:;
- (void)setTipModel:;
- (id)tipModel;
- (void)dealloc;
- (void)updateContent;
- (void).cxx_destruct;
- (id)template;
- (void)setTemplate:;
- (id)pageIdentifier;
- (void)setPageIdentifier:;
@end
