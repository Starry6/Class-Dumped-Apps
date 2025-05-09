@interface AWEPlayInteractionShareElement : AWEPlayInteractionRightElement
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEShowDouPlusManager showDouPlusManager;
@property (nonatomic) AWEBubble fansTooltip;
@property (nonatomic) BOOL isFansToolGuideAnimating;
@property (nonatomic) Q fansToolShareOption;
@property (nonatomic) AWEBubble liteGoldShareGuideBubble;
@property (nonatomic) DUXPopover liteGoldShareGuidePopover;
@property (nonatomic) DUXPopover redPacketRemindGuidePopover;
@property (nonatomic) UIView<AWEPlayInteractionShareElementContentViewProtocol> contentView;
@property (nonatomic) AWEPlayInteractionShareElementViewModel viewModel;
@property (nonatomic) DUXPopover bubblePopover;
@property (nonatomic) <AWEInteractionElementLongPressProtocol> longPressGestureManager;
@property (nonatomic) BOOL isLightVideo;
@property (nonatomic) AWEFeedVideoButton shareButton;
@property (nonatomic) NSString shareButtonLabelString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView view;
@property (nonatomic) UIButton<AWEFeedVideoButtonProtocol> button;
- (void)didFinishLogoutWithUid:;
- (void)initializeElement;
- (void)videoDidActivity;
- (void)viewController_willDisplay;
- (BOOL)isCommentPanelShowing;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisappear;
- (void)viewController_viewDidDisappear;
- (id)aAWEPadModuleAdapter;
- (void)showDouPlusEntryGuideAnimation;
- (void)updateShareButton;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)showStringFromNumber:;
- (void)onShareButtonClicked;
- (void)updateShareButtonStyle;
- (id)setupShareButton;
- (void)cleanViewModel;
- (void)updateViewModel;
- (id)shareButtonLabelString;
- (void)setShareButtonLabelString:;
- (void)bindEvent;
- (id)aAWEPlayInteractionAdapter;
- (void)setupPadKeybindings;
- (void)setupPadElementSizeWithConfig:;
- (void)updateAccesibilityLabel;
- (id)aAWEFeedShareObtainGoldDOUYINLiteAdapter;
- (id)longPressGestureManager;
- (void)setLongPressGestureManager:;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (void)handleAppDidEnterBackground;
- (void)setIsLightVideo:;
- (void)adaptJingXuanElementSizeWithConfig:type:;
- (BOOL)isLightVideo;
- (void)updateElementForLightVideo:shadowController:;
- (BOOL)shouldShrinkRightInteractionElement;
- (void)configDouPlusManager:;
- (id)showDouPlusManager;
- (void)fetchDouPlusGuideInfoInFeedScene;
- (BOOL)isCommonDouPlusGuideLimit;
- (BOOL)isLimitDouPlusGuideBubbleInInteractionScene;
- (void)setShowDouPlusManager:;
- (BOOL)checkNeedToShowDouPlusGuide;
- (BOOL)shouldShowPlusGuideBubble;
- (void)willReverseIconForFansTool:;
- (void)showDouPlusGuideBubble;
- (void)showDouPlusGuideBubbleInInteractionScene;
- (void)showDouPlusGuideInInteractionSceneAfterCommentPanelDismiss;
- (BOOL)canShowDouPlusGuideBubble:;
- (BOOL)shouldShowDouPlusFeedGuide;
- (void)douplusWillReverseIconFromUserProfile:;
- (id)fansTooltip;
- (BOOL)isFansToolGuideAnimating;
- (unsigned long long)fansToolShareOption;
- (void)setFansToolShareOption:;
- (void)showFansTooltipIfNeeded;
- (void)setIsFansToolGuideAnimating:;
- (void)__showFansTooltip;
- (void)__removeBubbleTip;
- (void)setFansTooltip:;
- (void)fansTool_videoDidActivity;
- (void)fansTool_viewDidAppear;
- (void)resetFansTooltip;
- (void)flipAvatarToShareIcon;
- (BOOL)enableShareElementRefactor;
- (void)showLongPressShareTransferReminderPopover;
- (id)liteGoldShareGuideBubble;
- (id)liteGoldShareGuidePopover;
- (void)setLiteGoldShareGuidePopover:;
- (void)setLiteGoldShareGuideBubble:;
- (void)p_showRedPacketRemindPopoverWithTip:;
- (void)p_removeRedPacketRemindPopover;
- (void)setRedPacketRemindGuidePopover:;
- (id)redPacketRemindGuidePopover;
- (void)p_removeLiteGoldShareGuideBubbleIfNeeded;
- (BOOL)shouldAdapteJingXuanPlayer;
- (id)padMoreElement;
- (void)updateShareButtonMoreIconAccessibilityLabel;
- (void)updateDefaultShareButtonStyle;
- (BOOL)canUpdateJXShareElementSizeWithType:;
- (void)addLongPressGestureIfNeeded;
- (void)setupLongpressShareGesture;
- (void)p_createLiteGoldTaskIfNeeded;
- (void)p_showLiteGoldShareGuideBubbleIfNeeded;
- (void)p_showRedPacketRemindPopoverIfNeed;
- (void)p_resetLiteGoldGuide;
- (void)p_resetFCollectGuide;
- (void)playLiteGoldShareGuideAnimationWithFinishBlock:;
- (void)playFCollectShareGuideAnimationWithFinishBlock:;
- (void)playIMShareGuideAnimationWithFinishBlock:;
- (void)playIncentiveShareIconAlienationAnimationWithFinishBlock:;
- (void)handleShareSuccessLetShareCountPlusNoti:;
- (void)handleShareIconFlip:;
- (void)handleSendShareMessageNoti:;
- (void)handleAddCommentNotice:;
- (void)handlBottomBarChanged:;
- (void)p_showLongPressHoverView;
- (id)aAWEPlayInteractionShareElementAdapter;
- (id)currentShareUnreadVideoFromUid;
- (void)shareIconFlipAnimationWithURLString:;
- (BOOL)flipImageNeedIncentive;
- (id)maskWithHeadImage:;
- (void)trackShowMoreButtonFlipPortraitEvent;
- (void)flipContextVertically:;
- (void)onShareButtonSingleClicked;
- (void)onShareButtonLongPressed;
- (BOOL)disableShareButtonMoreIcon;
- (id)bubblePopover;
- (void)setBubblePopover:;
- (void)dealloc;
- (void)addObserver;
- (id)viewModel;
- (void)viewDidLoad;
- (id)contentView;
- (void)updateLayout;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)reset;
- (id)button;
- (void)setShareButton:;
- (id)shareButton;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:;
+ (Class)aAWEPlayInteractionAdapterClass;
+ (Class)aAWEFeedShareObtainGoldDOUYINLiteAdapterClass;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (void)trackLiteGoldClickWithParam:;
+ (void)trackLiteGoldShowWithParam:;
+ (Class)aAWEPlayInteractionShareElementAdapterClass;
@end
