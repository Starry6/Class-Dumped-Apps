@interface AWEFeedRelatedVideoSingleCardSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) AWEFeedRelatedVideoSingleCardPlayerViewController videoViewController;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)configVideoViewController:logExtraDict:;
- (void).cxx_destruct;
- (void)setVideoViewController:;
- (id)videoViewController;
@end
