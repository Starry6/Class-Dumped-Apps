@interface IESLiveInnerFeedCellPreloadController : NSObject
@property (nonatomic) NSIndexPath preloadIndexPath;
@property (nonatomic) UICollectionViewCell<IESLiveInnerFeedPreloadCellProtocol> preloadCell;
@property (nonatomic) <IESLiveInnerFeedCellPreloadViewControllerProtocol> viewController;
@property (nonatomic) IESLiveProbePlayerStreamTracker tracker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadNextCell;
- (void)setPreloadCell:;
- (void)cancelCellUnderlyingPreloading;
- (void)didSetAttachingDIContext;
- (id)fetchPreloadCellAtIndexPath:;
- (id)preloadCell;
- (BOOL)preloadCellEnable;
- (id)preloadIndexPath;
- (BOOL)probePlayerStreamEnable;
- (void)schedulePreloadNextCell;
- (void)setPreloadIndexPath:;
- (void)setTracker:;
- (void)setViewController:;
- (id)tracker;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithViewController:;
@end
