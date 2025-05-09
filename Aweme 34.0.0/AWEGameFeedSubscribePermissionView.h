@interface AWEGameFeedSubscribePermissionView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIImage feedSubscribeImage;
@property (nonatomic) NSString feedSubscribeCoverUrl;
@property (nonatomic) NSString feedSubscribeInstruction;
@property (nonatomic) NSString permissionTips;
@property (nonatomic) NSString startType;
@property (nonatomic) Q type;
@property (nonatomic) BDPCloseButton closeButton;
@property (nonatomic) UIImageView gameIcon;
@property (nonatomic) UILabel gameName;
@property (nonatomic) UIButton rejectButton;
@property (nonatomic) UIButton acceptButton;
@property (nonatomic) UILabel instruction;
@property (nonatomic) UIImageView feedCardPic;
@property (nonatomic) UIImageView feedCover;
@property (nonatomic) UILabel tips;
@property (nonatomic) UIView topContent;
@property (nonatomic) UIView topSubContent;
@property (nonatomic) UIView centerContent;
@property (nonatomic) UIView centerSubContent;
@property (nonatomic) UIView bottomContent;
@property (nonatomic) UIView feedBg;
@property (nonatomic) BOOL sub_all;
@property (nonatomic) BOOL dismissAnimate;
@property (nonatomic) BOOL needRecordUserAction;
@property (nonatomic) BOOL dismissWhenError;
@property (nonatomic) q scene;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) <AWEGameFeedSubscribePermissionViewDelegate> viewDelegate;
@property (nonatomic) <AWEGameFeedSubscribePermissionViewDelegate> controlDelegate;
@property (nonatomic) @? callback;
- (id)gameName;
- (void)setGameName:;
- (id)topContent;
- (id)initWithFrame:builder:;
- (id)bottomContent;
- (void)setBottomContent:;
- (id)startType;
- (void)setGameIcon:;
- (id)gameIcon;
- (void)setNeedRecordUserAction:;
- (void)setSub_all:;
- (void)setFeedSubscribeImage:;
- (void)setStartType:;
- (void)setPermissionTips:;
- (void)setFeedSubscribeInstruction:;
- (void)setFeedSubscribeCoverUrl:;
- (void)setDismissAnimate:;
- (void)updateCoverUrl:;
- (BOOL)showFromParentView:completion:;
- (void)setDismissWhenError:;
- (BOOL)sub_all;
- (BOOL)dismissWhenError;
- (BOOL)dismissAnimate;
- (BOOL)dismissViewWithAnimate:completion:;
- (BOOL)needRecordUserAction;
- (id)feedSubscribeImage;
- (id)feedSubscribeCoverUrl;
- (id)feedSubscribeInstruction;
- (id)permissionTips;
- (void)eventShow;
- (void)eventClick:;
- (id)feedCardPic;
- (id)feedCover;
- (void)onClickClose:;
- (id)buildButton;
- (void)onClickReject:;
- (void)onClickAccept:;
- (void)setFeedCardPic:;
- (void)setFeedCover:;
- (void)setFeedBg:;
- (id)feedBg;
- (void)setTopContent:;
- (void)setTopSubContent:;
- (void)setCenterSubContent:;
- (id)topSubContent;
- (id)centerSubContent;
- (void)onClickContentView:;
- (void)setCallback:;
- (void)setScene:;
- (id)callback;
- (void)setViewDelegate:;
- (long long)scene;
- (id)uniqueID;
- (id)contentView;
- (id)viewDelegate;
- (unsigned long long)type;
- (void)setUniqueID:;
- (id)tips;
- (void)setType:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setTips:;
- (void)setInstruction:;
- (id)instruction;
- (void)setCloseButton:;
- (id)acceptButton;
- (id)closeButton;
- (void)setAcceptButton:;
- (id)rejectButton;
- (void)setRejectButton:;
- (void)setCenterContent:;
- (void)setUpUI;
- (id)centerContent;
- (id)controlDelegate;
- (void)setControlDelegate:;
- (void)layoutUI;
@end
