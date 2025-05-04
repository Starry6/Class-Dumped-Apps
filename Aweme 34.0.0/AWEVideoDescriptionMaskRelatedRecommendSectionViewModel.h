@interface AWEVideoDescriptionMaskRelatedRecommendSectionViewModel : AWEBaseListSectionViewModel
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)onAwemeDiggNotification:;
- (void)onVideoFavoriteNotification:;
- (id)init;
- (void)dealloc;
@end
