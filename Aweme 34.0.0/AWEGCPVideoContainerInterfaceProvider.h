@interface AWEGCPVideoContainerInterfaceProvider : NSObject
@property (nonatomic) NSMutableDictionary containerContextMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)destroyVideoContainerWithAwemeModel:;
- (BOOL)createVideoContainerWithAwemeModel:panelController:interactionController:feedCellController:halfPanelController:;
- (void)updateVideoContainerWithAwemeModel:panelController:interactionController:feedCellController:halfPanelController:;
- (void)beforeResetVideoContainerWithAwemeModel:;
- (void)updatePlayTime:totalTime:withAwemeModel:;
- (void)currentPlayVideoDidChangePlayState:withAwemeModel:;
- (id)containerDiContextWithWithAwemeModel:;
- (void)setContainerContextMap:;
- (id)keyWithAwemeModel:;
- (id)containerContextMap;
- (id)videoContainerWithAwemeModel:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
