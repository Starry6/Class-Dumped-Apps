@interface AWEChallengeDetailBaseFeedViewModel : AWEBaseListViewModel
@property (nonatomic) AWEChallengeDetailFeedSectionViewModel feedSectionViewModel;
- (void)fetchListData;
- (void)loadMoreListData;
- (id)feedSectionViewModel;
- (void)setFeedSectionViewModel:;
- (void)trackPreviewingFeedItemWithModel:;
- (void).cxx_destruct;
@end
