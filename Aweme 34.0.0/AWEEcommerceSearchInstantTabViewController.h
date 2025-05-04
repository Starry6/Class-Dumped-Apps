@interface AWEEcommerceSearchInstantTabViewController : AWESearchDoubleColumnMerchandiseViewController
@property (nonatomic) BDXBridgeEventSubscriber updateAddressSubscriber;
@property (nonatomic) AWEEcommerceSearchTabVCConfigModel vcConfigModel;
- (id)aweui_emptyPageEdgeInsets;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)getEnterFromSource;
- (void)setVcConfigModel:;
- (id)vcConfigModel;
- (id)customeSearchChannel;
- (id)getDefaultSearchType;
- (id)getEcommerceSubtabName;
- (id)pageBackgroundColor;
- (id)updateAddressSubscriber;
- (void)setUpdateAddressSubscriber:;
- (void)setupUpdateAddressSubscriber;
- (void)addGradientBackgroundLayer;
- (id)init;
- (void)dealloc;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
