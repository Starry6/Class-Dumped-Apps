@interface IESECGoodsDetailHeaderContentFooter : UICollectionReusableView
@property (nonatomic) UIView sliceView;
@property (nonatomic) <IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (nonatomic) IESECGoodsDetailHeaderServiceProvider serviceProvider;
- (void)setViewManager:;
- (void)setSliceView:;
- (id)sliceView;
- (void)updateWithSlice:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)viewManager;
@end
