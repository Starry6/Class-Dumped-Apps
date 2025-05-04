@interface AWEPadPolymericChannelVideoBaseCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) NSString pageKey;
- (id)diffIdentifier;
- (id)pageKey;
- (void)setPageKey:;
- (void)trackCardShow;
- (void)viewDidDisplay;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
