@interface IESECoodsDetailHeaderContentSliceCell : IESECoodsDetailHeaderContentBaseCell
@property (nonatomic) UIView sliceView;
@property (nonatomic) <IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (nonatomic) <IESECGoodsDetailHeaderStorageService> storage;
@property (nonatomic) <IESECGoodsDetailHeaderContentService> content;
- (void)setViewManager:;
- (void)configWithModel:serviceProvider:;
- (void)setSliceView:;
- (id)sliceView;
- (id)content;
- (void)setContent:;
- (void)layoutSubviews;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (id)viewManager;
@end
