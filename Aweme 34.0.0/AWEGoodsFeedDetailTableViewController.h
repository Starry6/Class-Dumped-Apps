@interface AWEGoodsFeedDetailTableViewController : AWEAwemeDetailTableViewController
@property (nonatomic) BOOL didShowBottomGuide;
@property (nonatomic) BOOL didCompleteBottomGuide;
@property (nonatomic) BOOL isFullMode;
@property (nonatomic) double panPercent;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) @ ecomContainerDelegate;
@property (nonatomic) @? returnBlock;
@property (nonatomic) @? updateBottomGuideBlock;
@property (nonatomic) @? updateNaviBarBlock;
@property (nonatomic) @? willConfigCell;
@property (nonatomic) @? initialDataSourceFinishedBlock;
@property (nonatomic) NSString videoID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeWithAnimated:;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (void)audienceQuitByCloseButtonWithSlideVC:;
- (id)customTargetContentOffsetWithScrollingVelocity:;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollDidScroll:nextModel:percentage:;
- (id)configCell:atIndexPath:tableView:;
- (void)initParams;
- (void)onScrollDidEnd;
- (double)contentOffsetYForCellAtIndex:;
- (void)registerMessage;
- (BOOL)isFullMode;
- (long long)currentAdjustTableViewOffsetY;
- (void)updateFirstCardPanPercent:;
- (id)ecomContainerDelegate;
- (void)setEcomContainerDelegate:;
- (void)unRegisterMessage;
- (void)setIsFullMode:;
- (void)setPanPercent:;
- (id)initialDataSourceFinishedBlock;
- (id)willConfigCell;
- (id)goodsFeedModelWithIndexPath:;
- (double)getModelInitTimeWithAwemeItemID:;
- (id)updateNaviBarBlock;
- (BOOL)didShowBottomGuide;
- (void)setDidShowBottomGuide:;
- (id)updateBottomGuideBlock;
- (BOOL)didCompleteBottomGuide;
- (void)setDidCompleteBottomGuide:;
- (void)updateFirstCardLayoutWithIsFullMode:animationTime:;
- (void)scrollToNextCard;
- (double)panPercent;
- (void)setUpdateBottomGuideBlock:;
- (void)setUpdateNaviBarBlock:;
- (void)setWillConfigCell:;
- (void)setInitialDataSourceFinishedBlock:;
- (void)setIsPanning:;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)initWithConfig:;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (BOOL)isPanning;
- (void)setReturnBlock:;
- (id)returnBlock;
- (id)videoID;
- (void)setVideoID:;
@end
