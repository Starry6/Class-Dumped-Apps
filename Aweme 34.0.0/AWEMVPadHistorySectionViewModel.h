@interface AWEMVPadHistorySectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) <AWEMVChannelSectionControllerProtocol> sectionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)setSectionController:;
- (id)sectionController;
- (void).cxx_destruct;
@end
