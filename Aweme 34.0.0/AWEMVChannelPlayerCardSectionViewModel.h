@interface AWEMVChannelPlayerCardSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) <AWEMVChannelSectionControllerProtocol> sectionController;
@property (nonatomic) BOOL isMidSizeCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)isMidSizeCard;
- (void)setIsMidSizeCard:;
- (void)setSectionController:;
- (id)sectionController;
- (void).cxx_destruct;
@end
