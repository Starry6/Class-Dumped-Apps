@interface AWESearchAdEndorseLiveInfoView : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UIView avatarContainer;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UILabel subDescLabel;
@property (nonatomic) UIButton appointmentBtn;
@property (nonatomic) UIImageView verifyImageView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) AWEOriginalAdModel adInfo;
@property (nonatomic) BOOL isLiveRoom;
@property (nonatomic) BOOL didSubscribed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? appointmentBtnTappedBlock;
@property (nonatomic) @? infoViewTappedBlock;
@property (nonatomic) @? enterLiveRoomBlock;
@property (nonatomic) AWEUserModel userInfo;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)handleAppointmentResultWithAdModel:sceneType:appointmentStatus:error:;
- (void)setAdInfo:;
- (id)adInfo;
- (id)enterLiveRoomBlock;
- (void)setEnterLiveRoomBlock:;
- (void)setupTapGesture;
- (id)appointmentBtn;
- (id)subDescLabel;
- (id)verifyImageView;
- (void)setupSubviewAccessbility;
- (void)setIsLiveRoom:;
- (void)setDidSubscribed:;
- (BOOL)didSubscribed;
- (BOOL)isLiveRoom;
- (BOOL)useNewAvatar;
- (void)appendAdLabelInDescWithAdModel:;
- (void)configLayouts;
- (id)p_attributeStringForAdMoreLinkView:;
- (id)infoViewTappedBlock;
- (void)handleBtnTapped;
- (void)jumpToAppointmentPageView;
- (void)tapBackgroundView;
- (void)tapAvatar;
- (void)configWithAdInfo:isLiveRoom:andAweme:;
- (id)appointmentBtnTappedBlock;
- (void)setAppointmentBtnTappedBlock:;
- (void)setInfoViewTappedBlock:;
- (void)setSubDescLabel:;
- (void)setAppointmentBtn:;
- (void)setVerifyImageView:;
- (void)dealloc;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setUserInfo:;
- (id)userInfo;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (id)avatar;
- (void)setAvatar:;
- (void)setupSubviews;
- (id)avatarContainer;
- (void)setAvatarContainer:;
+ (id)liveInfoView;
@end
