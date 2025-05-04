@interface AWEListenFeedSectionViewModel : AWEBaseListSectionViewModel
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (id)awemeModelWithIndex:;
- (void)handleFollowedNotification:;
- (void)handleUnFollowedNotification:;
- (void)updateLocalFollowState:ofAuthor:;
- (id)cellViewModelWithIndex:;
- (id)init;
@end
