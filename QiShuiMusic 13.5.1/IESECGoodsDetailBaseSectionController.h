@interface IESECGoodsDetailBaseSectionController : IGListSectionController
@property (nonatomic) IESECCollectionViewSectionColumnLayout sectionLayout;
@property (nonatomic) IESECGoodsDetailPageBaseViewModel viewModel;
@property (nonatomic) IESECGoodsDetailPageViewProvider viewProvider;
@property (nonatomic) IESECLLDCLynxManager lynxManager;
@property (nonatomic) IESECGoodsDetailSKUManager skuManager;
@property (nonatomic) BOOL ignoreReloadView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadWithAnimation:completion:;
- (void)setLynxManager:;
- (void)didUpdateToObject:;
- (BOOL)ignoreReloadView;
- (id)initWithLynxManager:;
- (id)lynxManager;
- (id)sectionLayout;
- (void)setIgnoreReloadView:;
- (void)setSectionLayout:;
- (void)setSkuManager:;
- (id)skuManager;
- (id)viewProvider;
- (id)viewModel;
- (void)setViewProvider:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)sizeForItemAtIndex:;
@end
