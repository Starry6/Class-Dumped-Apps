@interface IESECSKUNewInstallmentViewModel : IESECSKUInstallmentViewModel
@property (nonatomic) IESECSKUPOIViewModel poiViewModel;
@property (nonatomic) UIColor atmosphereColor;
- (id)atmosphereColor;
- (id)initWithSKUModel:detailContext:;
- (id)poiViewModel;
- (void)setPoiViewModel:;
- (BOOL)showDouInstallment;
- (BOOL)showPOIInfo;
- (BOOL)showTradeIn;
- (void)trackTradeInClick:;
- (void)trackTradeInShow;
- (id)tradeInTitle;
- (id)tradeItems;
- (void).cxx_destruct;
@end
