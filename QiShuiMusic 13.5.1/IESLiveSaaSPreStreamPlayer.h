@interface IESLiveSaaSPreStreamPlayer : NSObject
@property (nonatomic) UIView parentContainer;
@property (nonatomic) UIView belowContainer;
@property (nonatomic) UIView aboveContainer;
@property (nonatomic) <IESLivePlayerProtocol> playerController;
@property (nonatomic) IESLiveSaaSNewPlayerFactory playerFactory;
@property (nonatomic) IESLiveInteractiveSEIParser seiParser;
@property (nonatomic) IESLiveBigPartyPreStreamController bigPartyController;
@property (nonatomic) IESLiveBigPartyPreStreamAdapterWrapper bigPartyPreStreamAdapter;
@property (nonatomic) IESLiveFeedAudioView audioAnimationView;
@property (nonatomic) IESLiveSaaSLiveRoomModel currentRoomModel;
@property (nonatomic) NSString currentPlayerStreamData;
@property (nonatomic) NSString currentPlayerSDKKey;
@property (nonatomic) BOOL isDrawAndGuessGoingOn;
@property (nonatomic) BOOL isIntimateChatOn;
@property (nonatomic) NSNumber gridsOffsetY;
@property (nonatomic) BOOL needResetContainerFrame;
@property (nonatomic) @? tipDistanceChangeAction;
@property (nonatomic) @? updateAudioListModelAction;
@property (nonatomic) @? updateBigPartyListAction;
@property (nonatomic) @? timateChatChangeAction;
@property (nonatomic) @? playerStopAction;
@property (nonatomic) @? playLoadStateChangeAction;
@property (nonatomic) @? receiveDryUpAction;
@property (nonatomic) @? mediaSizeChangeAction;
@property (nonatomic) @? didReceiveMetaInfoAction;
@property (nonatomic) @? previewDegradeAction;
@property (nonatomic) @? previewDegradeResult;
@property (nonatomic) BOOL didEndedLive;
@property (nonatomic) BOOL enableCheckSEISourceAndAppData;
@property (nonatomic) BOOL useInLandscapeContainer;
@property (nonatomic) UIView playerView;
@property (nonatomic) q windowType;
@property (nonatomic) <IESLivePlayerControllerDelegate> playerDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prePlay;
- (void)smoothEnterRoom;
- (void)clearPlayerView;
- (BOOL)isFromFeedVideo;
- (id)aboveContainer;
- (id)anchorID;
- (void)asyncLoadResourceUsingBlock:;
- (id)audioAnimationView;
- (id)belowContainer;
- (long long)bigPartyContentModeForEqual;
- (long long)bigPartyContentModeForNonOverlapping;
- (id)bigPartyController;
- (void)bigPartyDidActivate;
- (void)bigPartyDidDeactivate;
- (void)bigPartyLayoutStyleEnd:;
- (void)bigPartyLayoutStyleStart:;
- (id)bigPartyPreStreamAdapter;
- (BOOL)canReSwitchResolution;
- (id)changeLandscapeMediaSize:;
- (id)containerForBigParty;
- (id)containerFrameForBigParty;
- (id)currentPlayerSDKKey;
- (id)currentPlayerStreamData;
- (id)currentRoomModel;
- (void)dealWithDrawAndGuessWithMetaInfo:;
- (void)dealWithLinkMicWithMetaInfo:;
- (BOOL)didEndedLive;
- (id)didReceiveMetaInfoAction;
- (BOOL)enableCheckSEISourceAndAppData;
- (void)enqueuePlayerWithBlock:;
- (void)enterLiveEnd;
- (void)getFeedInteractListV2With:anchorID:extra:completion:;
- (id)gridsOffsetY;
- (void)handleDrawAndGuessWithSEIInfo:playerView:containerView:isPreview:gameoverBlock:smallWindowShown:;
- (id)htsLiveRoomModelWithSaasLiveRoomModel:;
- (id)initWithContainer:above:below:;
- (id)initWithPlayer:container:above:below:;
- (BOOL)isAudioLive;
- (BOOL)isBigPartyGoingOn;
- (BOOL)isDrawAndGuessGoingOn;
- (BOOL)isIntimateChatOn;
- (void)layoutPlayerController;
- (BOOL)livePlayerReusable;
- (void)liveStreamReSwitchWithStreamData:;
- (void)loadAudioViewIfNeededWithRoomModel:;
- (id)mediaSizeChangeAction;
- (void)mediaSizeDidChange:;
- (id)mediaSizeForBigParty;
- (BOOL)needResetContainerFrame;
- (void)onAllRoomsClosedWithBlock:;
- (id)p_landscapeFrameForBigParty;
- (id)playLoadStateChangeAction;
- (id)playModeListForBigParty;
- (void)player:didReceiveError:;
- (void)player:didReceiveMetaInfo:processed:;
- (void)player:loadStateDidChange:;
- (void)player:mediaSizeDidChange:;
- (void)player:playbackStateDidChange:;
- (id)playerContainerForBigParty;
- (id)playerDelegate;
- (id)playerForBigParty;
- (id)playerStopAction;
- (id)previewDegradeAction;
- (id)previewDegradeResult;
- (id)receiveDryUpAction;
- (void)removeFakeBizeView;
- (void)resetAudioView;
- (void)resetLinkMicState;
- (void)resetPlayerController;
- (void)resizePlayerFrameInLandscape:;
- (void)resizePlayerFrameInPortrait:;
- (id)roomServiceAdapterWithRoomModel:;
- (id)seiParser;
- (id)seiReceiverForBigParty;
- (void)setAboveContainer:;
- (void)setAudioAnimationView:;
- (void)setBelowContainer:;
- (void)setBigPartyController:;
- (void)setBigPartyPreStreamAdapter:;
- (void)setCurrentPlayerSDKKey:;
- (void)setCurrentPlayerStreamData:;
- (void)setCurrentRoomModel:;
- (void)setDidEndedLive:;
- (void)setDidReceiveMetaInfoAction:;
- (void)setEnableCheckSEISourceAndAppData:;
- (void)setGridsOffsetY:;
- (void)setIsDrawAndGuessGoingOn:;
- (void)setIsIntimateChatOn:;
- (void)setMediaSizeChangeAction:;
- (void)setNeedResetContainerFrame:;
- (void)setPlayLoadStateChangeAction:;
- (void)setPlayerDelegate:;
- (void)setPlayerFactory:;
- (void)setPlayerStopAction:;
- (void)setPreviewDegradeAction:;
- (void)setPreviewDegradeResult:;
- (void)setReceiveDryUpAction:;
- (void)setSeiParser:;
- (void)setTimateChatChangeAction:;
- (void)setTipDistanceChangeAction:;
- (void)setUpdateAudioListModelAction:;
- (void)setUpdateBigPartyListAction:;
- (void)setUseInLandscapeContainer:;
- (void)setWindowType:;
- (id)timateChatChangeAction;
- (id)tipDistanceChangeAction;
- (id)updateAudioListModelAction;
- (id)updateBigPartyListAction;
- (void)updateLiveRoomData;
- (void)updatePlayerConfigRoomID:;
- (void)updateStreamData:;
- (void)updateStreamDataWithOperationModel:;
- (BOOL)useInLandscapeContainer;
- (long long)windowType;
- (void)play;
- (id)playerController;
- (void)stop;
- (void)close;
- (void)setPlayerController:;
- (void).cxx_destruct;
- (id)playerView;
- (void)reset;
- (id)parentContainer;
- (void)setParentContainer:;
- (id)roomID;
- (id)playerFactory;
+ (id)lastPlayingRoomID;
+ (void)setLastPlayingRoomID:;
@end
