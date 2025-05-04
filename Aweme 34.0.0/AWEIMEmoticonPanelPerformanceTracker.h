@interface AWEIMEmoticonPanelPerformanceTracker : NSObject
@property (nonatomic) <AWEIMEmoticonPanelPage> page;
@property (nonatomic) NSMutableSet vmInFirstFrame;
@property (nonatomic) AWEIMEmoticonCellViewModel emptyViewModel;
@property (nonatomic) double pageWillDisplayTime;
@property (nonatomic) double imageDidLoadTime;
- (id)emptyViewModel;
- (void)setEmptyViewModel:;
- (void)panelCollectionViewReloadData;
- (void)pageWillDisplay;
- (void)recordViewModelIfNeeded:;
- (id)vmInFirstFrame;
- (void)p_report;
- (double)imageDidLoadTime;
- (void)setImageDidLoadTime:;
- (void)setPageWillDisplayTime:;
- (double)pageWillDisplayTime;
- (void)p_reportEmoticonPerf:processDuration:;
- (void)setVmInFirstFrame:;
- (id)page;
- (void).cxx_destruct;
- (void)setPage:;
- (id)initWithPage:;
- (id)imageDidLoadBlock;
@end
