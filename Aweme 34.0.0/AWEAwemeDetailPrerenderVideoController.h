@interface AWEAwemeDetailPrerenderVideoController : NSObject
@property (nonatomic) UITableViewCell<AWEAwemeContainerTableViewCellPreloadProtocol> preloadedCell;
@property (nonatomic) AWEFeedPreloadManager preloadVideoManager;
@property (nonatomic) double cellPrerenderDelay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPreloadVideoManager:;
- (id)preloadVideoManager;
- (void)checkIfNeedPrerenderVideo:model:;
- (double)cellPrerenderDelay;
- (void)executePrepareForDisplay:;
- (void)prepareForDisplayWithCell:;
- (void)scheduleCellPrepareForDisplay:model:;
- (void)cancelCellPrepareForDisplay;
- (id)initWithFeedPreloadManager:;
- (void)setCellPrerenderDelay:;
- (void).cxx_destruct;
- (id)preloadedCell;
- (void)setPreloadedCell:;
+ (BOOL)isSupportPrerenderAdvanceInner:;
@end
