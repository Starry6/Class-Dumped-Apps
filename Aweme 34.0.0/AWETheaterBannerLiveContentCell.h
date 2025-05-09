@interface AWETheaterBannerLiveContentCell : AWETheaterBannerBaseContentCell
@property (nonatomic) <AWELiveStreamPlayer> playerController;
@property (nonatomic) AWELiveRoomModel room;
@property (nonatomic) AWETheaterPageContext liveContext;
@property (nonatomic) BOOL isEnterRoom;
@property (nonatomic) <AWELiveShowTagViewProtocol> tagViewModel;
@property (nonatomic) UIView tagView;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q viewRight;
@property (nonatomic) IESLiveIMPaaSWorker worker;
@property (nonatomic) double startPlayerTimeV1;
@property (nonatomic) double startPlayerTimeV2;
@property (nonatomic) q durationV1;
@property (nonatomic) q durationV2;
@property (nonatomic) BOOL hadReportedPlay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)player:loadStateDidChange:;
- (void)player:playbackStateDidChange:;
- (long long)viewRight;
- (void)setViewRight:;
- (void)trialTimeDidChange:;
- (void)viewStatusDidChange:hasShareTickets:;
- (BOOL)isEnterRoom;
- (void)setIsEnterRoom:;
- (BOOL)isPaidLive;
- (BOOL)isVerticalStream;
- (void)setupIMConfigCore;
- (void)trackStreamingPlay;
- (BOOL)hadReportedPlay;
- (void)setHadReportedPlay:;
- (void)configWithSectionItem:context:logExtraDict:;
- (void)trackCellWillDisplay;
- (void)trackCellWillDisappear;
- (id)p_awemeWithLiveRoom;
- (void)setLiveContext:;
- (void)makePlayerControllerLayout;
- (void)updatePlayerMuteButtonShow:;
- (void)makeTagViewLayout;
- (void)installMessageReceivice;
- (void)uninstallMessageReceivice;
- (void)trackLiveEvent:extraParams:;
- (void)trackLiveShowReport;
- (void)trackLiveDuration;
- (id)tagViewModel;
- (id)liveContext;
- (void)setStartPlayerTimeV1:;
- (void)setStartPlayerTimeV2:;
- (void)updatePaidTagType;
- (void)calculateDurationV1;
- (long long)currentPaidTagType;
- (BOOL)playerShouldMute;
- (id)theaterCommonParams;
- (id)liveCommonParams;
- (id)paidLiveCommonParams;
- (void)calculateDurationV2;
- (long long)durationV1;
- (long long)durationV2;
- (double)startPlayerTimeV1;
- (void)setDurationV1:;
- (double)startPlayerTimeV2;
- (void)setDurationV2:;
- (id)playerCommonParams;
- (void)setTagViewModel:;
- (void)play;
- (void)setPlayerController:;
- (void)prepareForReuse;
- (id)playerController;
- (void).cxx_destruct;
- (void)updateMuteStatus:;
- (void)reset;
- (void)stop;
- (void)pause;
- (id)room;
- (void)setRoom:;
- (void)messageReceived:;
- (void)setWorker:;
- (id)worker;
- (void)handleTap;
- (void)resetPlayer;
- (id)tagView;
- (void)setTagView:;
@end
