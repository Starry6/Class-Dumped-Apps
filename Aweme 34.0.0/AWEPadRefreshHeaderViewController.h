@interface AWEPadRefreshHeaderViewController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadPolymericChannelDataController dataController;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString pageKey;
@property (nonatomic) q refreshCount;
- (id)aAWEPadModuleAdapter;
- (void)setDataController:;
- (id)pageKey;
- (void)setPageKey:;
- (void)configView:;
- (void)trackRefreshClick;
- (Class)viewClass;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)dataController;
- (long long)refreshCount;
- (void)setRefreshCount:;
+ (Class)aAWEPadModuleAdapterClass;
@end
