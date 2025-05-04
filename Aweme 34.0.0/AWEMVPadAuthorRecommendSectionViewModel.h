@interface AWEMVPadAuthorRecommendSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEMVChannelPageContext context;
@property (nonatomic) AWEMVChannelViewModel containerViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerViewModel;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setContainerViewModel:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
