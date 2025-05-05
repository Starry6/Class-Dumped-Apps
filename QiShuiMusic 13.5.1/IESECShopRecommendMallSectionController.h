@interface IESECShopRecommendMallSectionController : IGListSectionController
@property (nonatomic) IESECCollectionViewSectionLayout sectionLayout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (void)jumpToMall:btmToken:;
- (void)mallTrack:;
- (void)mallTrack:isButton:;
- (void)productTrack:event:cell:once:jump:host:;
- (id)productTrackParams;
- (id)sectionLayout;
- (void)setSectionLayout:;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
