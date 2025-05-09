@interface IESLivePrivilegeEntranceEcomProfileView : UIView
@property (nonatomic) IESLiveImageView container;
@property (nonatomic) IESLiveButton fansclubButton;
@property (nonatomic) UILabel fansclubLevelLabel;
@property (nonatomic) UIImage activeFansBgImage;
@property (nonatomic) UIImage inActiveFansBgImage;
@property (nonatomic) BOOL isFirstShow;
@property (nonatomic) <IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory animationFactory;
@property (nonatomic) NSString fansclubState;
@property (nonatomic) NSNumber showFansclubGuide;
@property (nonatomic) NSNumber fansclubLevel;
@property (nonatomic) NSNumber roomFansclubDataReady;
@property (nonatomic) NSNumber enableShowAnimation;
@property (nonatomic) NSString lastFansclubState;
@property (nonatomic) NSNumber isShowing;
@property (nonatomic) NSString lastVipState;
@property (nonatomic) NSString vipState;
@property (nonatomic) NSNumber roomVIPDataReady;
@property (nonatomic) NSNumber showVIPGuide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsFirstShow:;
- (id)activeFansBgImage;
- (void)bindState;
- (id)buttonBgImageWithColorArray:;
- (id)enableShowAnimation;
- (id)fansclubButton;
- (id)fansclubLevel;
- (id)fansclubLevelLabel;
- (id)fansclubState;
- (id)inActiveFansBgImage;
- (BOOL)isFirstShow;
- (id)lastFansclubState;
- (id)lastVipState;
- (void)playFansclubGuideAnimationIfNeeded;
- (void)playShowAnimationIfNeeded;
- (id)roomFansclubDataReady;
- (id)roomVIPDataReady;
- (void)setActiveFansBgImage:;
- (void)setEnableShowAnimation:;
- (void)setFansclubButton:;
- (void)setFansclubLevel:;
- (void)setFansclubLevelLabel:;
- (void)setFansclubState:;
- (void)setInActiveFansBgImage:;
- (void)setIsShowing:;
- (void)setLastFansclubState:;
- (void)setLastVipState:;
- (void)setRoomFansclubDataReady:;
- (void)setRoomVIPDataReady:;
- (void)setShowFansclubGuide:;
- (void)setShowVIPGuide:;
- (void)setVipState:;
- (id)showFansclubGuide;
- (id)showVIPGuide;
- (void)tapFansclubButton;
- (void)updateFansclubLevel:;
- (void)updateStateEnableAnimation:;
- (void)viewDidHideFromContainer:;
- (void)viewDidShowOnContainer:;
- (id)vipState;
- (void)setContainer:;
- (id)isShowing;
- (void)setAnimationFactory:;
- (id)animationFactory;
- (void)setDelegate:;
- (id)container;
- (id)viewSize;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
@end
