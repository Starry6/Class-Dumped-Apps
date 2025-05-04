@interface AWEStudioMusicListViewControllerBuilder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindContext:logType:data:;
- (void)startMonitorWithContext:logType:data:;
- (void)finishMonitorWithContext:logType:data:;
- (Class)studioSingleMusicRecommendVideosTableCellClass;
- (id)initiaLStudioSingleMusicRecommenVideosTableViewCellWithReuseIdentifier:;
- (double)singleMusicRecommenVideosTableViewCellHeightWithModel:isFirst:;
- (id)createDynamicMusicCardProgresBarFooter:;
- (id)initialProgressBarViewModel;
- (id)searchResponeParamsInfo:requestStartTime:;
- (void)startScrollFpsMonitor;
- (void)endScrollFpsMonitor;
- (id)createMusicBottomPlayerViewWithDelegate:;
@end
