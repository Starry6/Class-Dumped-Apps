@interface AWEPLVLimitedFreeAppointmentHeaderController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadPolymericChannelDataController dataController;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString pageKey;
- (void)setDataController:;
- (id)pageKey;
- (void)setPageKey:;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (Class)viewClass;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)dataController;
@end
