@interface AWEFeedRetrieveDisableRecommendUserController : AWEBaseController
@property (nonatomic) BOOL shouldStartTrackSkipAweme;
@property (nonatomic) NSMutableSet skipAwemeSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tableView:didEndDisplayingCellBeforeReset:forRowAtIndexPath:;
- (void)videoPlayer:updatePlayTime:totalTime:;
- (void)setSkipAwemeSet:;
- (BOOL)enableRetrieveDisableRecommendUser;
- (void)setShouldStartTrackSkipAweme:;
- (id)skipAwemeSet;
- (BOOL)shouldStartTrackSkipAweme;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
