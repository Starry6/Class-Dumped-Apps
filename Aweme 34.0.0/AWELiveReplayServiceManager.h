@interface AWELiveReplayServiceManager : NSObject
@property (nonatomic) UIView<IESECLiveReplayInteractionProtocol><IESECLiveReplayDataStoreOwner> interactionView;
@property (nonatomic) <IESECLiveReplayDataStore> dataStore;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) BOOL hasChangedPlaySpeed;
@property (nonatomic) IESECLiveReplayDataStore store;
@property (nonatomic) UIViewController feedCellViewController;
@property (nonatomic) UIViewController playVideoViewController;
@property (nonatomic) UIViewController interactionViewController;
@property (nonatomic) BOOL isRecall;
- (void)setInteractionViewController:;
- (id)trackParams;
- (id)playVideoViewController;
- (void)setPlayVideoViewController:;
- (void)containerViewDidAppear:;
- (void)containerViewWillDisappear:;
- (void)setTrackParams:;
- (void)trackEvent:params:;
- (id)commonTrackParamsWithModel:;
- (id)searchExtraParamsWithLogExtraDic:;
- (id)searchTrackParamsWithSearchExtraDic:;
- (void)updateDataStore:;
- (BOOL)isConformsPlayVideoProtocol;
- (void)setHasChangedPlaySpeed:;
- (void)updateProgress:totalDuration:;
- (BOOL)isRecall;
- (void)videoDidScroll;
- (BOOL)hasChangedPlaySpeed;
- (void)showPlayIcon:;
- (void)videoDidFinishPlay;
- (void)followStatusChange:;
- (void)configViewWithModel:;
- (void)willDisplayWithModel:;
- (id)feedCellViewController;
- (void)setFeedCellViewController:;
- (void)setIsRecall:;
- (id)dataStore;
- (void)setDataStore:;
- (id)interactionView;
- (void)dealloc;
- (void)play;
- (id)store;
- (id)playerController;
- (void)setInteractionView:;
- (void).cxx_destruct;
- (void)pause;
- (id)interactionViewController;
+ (void)markProductDetailPage:;
+ (BOOL)checkProductDetailPageHasShow;
@end
