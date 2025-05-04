@interface AWEMVChannelLargeBannerSectionController : AWEBaseListSectionController
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) AWEMVChannelViewModel containerViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)sectionDidEndDisplayingCell:index:;
- (id)containerViewModel;
- (long long)waterfallColumnCount;
- (void)didSelectItemAtIndex:model:;
- (void)trackAwemeBannerClosed:banner:bannerIndex:;
- (void)onCloseIconClickedWithBannerList:;
- (void)onCloseIconClicked;
- (void)setContainerViewModel:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
