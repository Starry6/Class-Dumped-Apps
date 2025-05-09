@interface IESLiveSaaSComponentContext : NSObject
@property (nonatomic) NSString originSchemaExtraParams;
@property (nonatomic) BOOL hasFinishCountdownTask;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) Q livePhase;
@property (nonatomic) q scene;
@property (nonatomic) NSArray supportScenes;
@property (nonatomic) q loadPhase;
@property (nonatomic) IESLiveSaaSPBEpisode episode;
@property (nonatomic) BOOL isRightPanEnabled;
@property (nonatomic) BOOL canSwitchToFullScreen;
@property (nonatomic) double enterRoomTimestamp;
@property (nonatomic) BOOL enableFeedDrawer;
@property (nonatomic) NSString nearbyCityCode;
@property (nonatomic) BOOL enableNearbyTVDrawer;
@property (nonatomic) IESLiveSaaSAnchorRoomConfigContext anchorRoomContext;
@property (nonatomic) BOOL disablePip;
@property (nonatomic) IESLiveSaaSRoomDrawModel roomDrawModel;
@property (nonatomic) NSString schemeURL;
@property (nonatomic) NSNumber retainConsultRoomId;
@property (nonatomic) NSDictionary retainConsultParams;
@property (nonatomic) double firstPlayCurrentTime;
@property (nonatomic) BOOL didSeekTime;
@property (nonatomic) BOOL didStartFromHighlight;
@property (nonatomic) NSNumber seekTime;
@property (nonatomic) NSString matchId;
@property (nonatomic) NSString sharePlatform;
@property (nonatomic) NSString originCameraID;
@property (nonatomic) NSNumber multiTabID;
- (id)countdownParams;
- (id)matchId;
- (void)setDidSeekTime:;
- (id)anchorRoomContext;
- (BOOL)canSwitchToFullScreen;
- (BOOL)didSeekTime;
- (BOOL)didStartFromHighlight;
- (BOOL)disablePip;
- (BOOL)enableFeedDrawer;
- (BOOL)enableNearbyTVDrawer;
- (double)enterRoomTimestamp;
- (double)firstPlayCurrentTime;
- (BOOL)hasFinishCountdownTask;
- (BOOL)isRightPanEnabled;
- (unsigned long long)livePhase;
- (id)multiTabID;
- (id)nearbyCityCode;
- (id)originCameraID;
- (id)originSchemaExtraParams;
- (id)retainConsultParams;
- (id)retainConsultRoomId;
- (id)roomDrawModel;
- (id)schemeURL;
- (void)setAnchorRoomContext:;
- (void)setCanSwitchToFullScreen:;
- (void)setDidStartFromHighlight:;
- (void)setDisablePip:;
- (void)setEnableFeedDrawer:;
- (void)setEnableNearbyTVDrawer:;
- (void)setEnterRoomTimestamp:;
- (void)setFirstPlayCurrentTime:;
- (void)setHasFinishCountdownTask:;
- (void)setIsAnchor:;
- (void)setIsRightPanEnabled:;
- (void)setLivePhase:;
- (void)setLoadPhase:;
- (void)setMatchId:;
- (void)setMultiTabID:;
- (void)setNearbyCityCode:;
- (void)setOriginCameraID:;
- (void)setOriginSchemaExtraParams:;
- (void)setRetainConsultParams:;
- (void)setRetainConsultRoomId:;
- (void)setRoomDrawModel:;
- (void)setSchemeURL:;
- (void)setSharePlatform:;
- (void)setSupportScenes:;
- (id)sharePlatform;
- (id)supportScenes;
- (void)setScene:;
- (long long)scene;
- (BOOL)isAnchor;
- (void).cxx_destruct;
- (void)setSeekTime:;
- (id)seekTime;
- (id)episode;
- (long long)loadPhase;
@end
