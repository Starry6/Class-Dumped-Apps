@interface AWEEcommerceSearchSubTabViewController : AWESearchDoubleColumnMerchandiseViewController
@property (nonatomic) AWEBinding sortFilterFramebinding;
@property (nonatomic) AWEEcommerceSearchTabVCConfigModel vcConfigModel;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)tabConfig;
- (id)getEnterFromSource;
- (BOOL)showFeedLynx;
- (id)currentAutoPlayConfig;
- (void)setVcConfigModel:;
- (id)vcConfigModel;
- (id)customeSearchChannel;
- (id)getDefaultSearchType;
- (id)getEcommerceSubtabName;
- (id)pageBackgroundColor;
- (id)sortFilterFramebinding;
- (void)setSortFilterFramebinding:;
- (id)init;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
