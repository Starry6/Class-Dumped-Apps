@interface IESECMallLiveCardCell : IESECMallNativeCardCell
@property (nonatomic) IESECMallFeedbackMaskView feedbackCoverView;
@property (nonatomic) IESECMallLiveCardView liveCardView;
@property (nonatomic) UILongPressGestureRecognizer longPressGesture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView productView;
- (id)awemeId;
- (id)defaultXBridges;
- (id)currentBridgeCallHanderForCards;
- (void)addLongPressGesture:;
- (BOOL)canSetMute;
- (void)cellDidEndDisplay;
- (void)cellWillDisplay:;
- (id)containerForAwemePlay;
- (void)didDisAppear;
- (id)feedbackCoverView;
- (BOOL)isCellMute;
- (BOOL)isValidVideo;
- (id)liveCardView;
- (id)liveCoverImageUrl;
- (id)liveModel;
- (id)mainStreamData;
- (id)mainVideoDuration;
- (id)mainVideoURL;
- (id)playerInnerListEnvID;
- (id)productView;
- (void)refreshTagIcon;
- (void)sendClickNoti:;
- (void)setFeedbackCoverView:;
- (void)setLiveCardView:;
- (void)setupFeedbackView;
- (BOOL)shouldRepeatForVideo;
- (void)updateUIWithItemStyle:;
- (void)updateVoiceMute:;
- (void)updateWithWindVaneData:;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (unsigned long long)cellType;
- (void).cxx_destruct;
- (void)didAppear;
- (id)longPressGesture;
- (void)setLongPressGesture:;
- (void)setupView;
- (void)updateWithModel:;
- (void)setPlayerHidden:;
@end
