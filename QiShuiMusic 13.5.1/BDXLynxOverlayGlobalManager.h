@interface BDXLynxOverlayGlobalManager : NSObject
@property (nonatomic) NSMutableDictionary levelContainers;
- (id)windowContainer;
- (id)levelContainers;
- (void)destoryOverlayView:atLevel:withMode:customViewController:;
- (id)getTopViewControllerWithMode:customViewController:;
- (long long)identifierWithModel:withContainer:;
- (id)levelContainerAt:withModel:withContainer:;
- (id)modalContainer;
- (id)pageContainer;
- (void)setLevelContainers:;
- (id)showOverlayView:atLevel:withMode:customViewController:;
- (void)sortViewsWithModel:withContainer:;
- (id)topContainer;
- (void).cxx_destruct;
+ (id)getAllVisibleOverlay;
+ (id)sharedInstance;
@end
