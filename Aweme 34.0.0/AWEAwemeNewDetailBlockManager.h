@interface AWEAwemeNewDetailBlockManager : NSObject
@property (nonatomic) <AWEAwemeNewDetailBlockManagerDelegate> delegate;
- (void)setupWithDelegate:;
- (void)playWithBlockManagerHelper:;
- (void)onAwemeDeleted:isDislike:blockManagerHelper:;
- (void)setBottomBarHidden:withBlockManagerHelper:;
- (id)cellReuseIdentifierForRowWithModel:blockManagerHelper:;
- (void)loadPrevious:blockManagerHelper:;
- (void)headerWithRefreshingBlockWithBlockManagerHelper:;
- (void)loadMoreForOldStyleCompletionWithList:error:blockManagerHelper:;
- (void)hasSlideToOtherFeedWithBlockManagerHelper:;
- (BOOL)shouldPreventPauseWithBlockManagerHelper:;
- (BOOL)closeCellPreloadWithBlockManagerHelper:;
- (id)createHotSpotInnerBottomBarContextBlockWithBlockManagerHelper:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
