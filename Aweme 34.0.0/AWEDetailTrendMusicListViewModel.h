@interface AWEDetailTrendMusicListViewModel : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) q selectedMusicItemIndex;
@property (nonatomic) q detailMusicListStatus;
@property (nonatomic) BOOL ifMusicListViewAppearHasTracked;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didUpdateWithMusicListModel:;
- (void)didSwitchToMusicItemAtIndex:;
- (id)currentMusicItemViewModel;
- (id)musicItemViewModelAtIndex:;
- (id)currentMusicItemModel;
- (id)musicListCommonTrackParams;
- (long long)selectedMusicItemIndex;
- (long long)detailMusicListStatus;
- (BOOL)ifMusicListViewAppearHasTracked;
- (void)setIfMusicListViewAppearHasTracked:;
- (void)musicCollectedStatusChanged:;
- (id)itemViewModelWithMusicItemModel:atIndex:;
- (void)setDetailMusicListStatus:;
- (void)setSelectedMusicItemIndex:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
@end
