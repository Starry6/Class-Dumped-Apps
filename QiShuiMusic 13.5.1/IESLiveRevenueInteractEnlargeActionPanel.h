@interface IESLiveRevenueInteractEnlargeActionPanel : UIView
@property (nonatomic) IESLiveMultiLinkerApi api;
@property (nonatomic) <IESLiveRevenueInteractProvider> provider;
@property (nonatomic) IESLiveRevenueInteractEnlargeActionModel model;
- (void)trackItemClick:;
- (id)initWithDiContext:model:provider:;
- (void)requestUpdateLayoutWithAction:anchorUIOperationLayout:;
- (void)trackBannerShow:allString:;
- (void)setProvider:;
- (id)model;
- (void)setModel:;
- (void)show;
- (id)provider;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
