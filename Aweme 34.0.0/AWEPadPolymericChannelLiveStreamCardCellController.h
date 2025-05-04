@interface AWEPadPolymericChannelLiveStreamCardCellController : AWEPadListReusableViewBaseController
@property (nonatomic) NSArray ownerUserArray;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (id)ownerUserArray;
- (id)liveCommonTrackParams;
- (void)setOwnerUserArray:;
- (Class)viewClass;
- (id)initWithModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
