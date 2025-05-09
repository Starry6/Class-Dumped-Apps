@interface AWEIMInnerPushCommonViewModel : NSObject
@property (nonatomic) AWEIMPushView oldView;
@property (nonatomic) AWEInnerPushCommonView currentView;
@property (nonatomic) AWEInnerPushCommonViewModel viewModel;
@property (nonatomic) <AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (nonatomic) AWEIMPushViewModel model;
@property (nonatomic) AWEIMChatModel chat;
@property (nonatomic) BOOL isReplyButtonActionCustomized;
@property (nonatomic) BOOL isReplyingLightCameraByReplyButton;
@property (nonatomic) AWEIMUserViewModel messageSenderOrRecallerVM;
@property (nonatomic) NSString trackIdentifier;
@property (nonatomic) BOOL isTextPushType;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)disablePullIndicatorView;
- (id)imStreakDisplayManager;
- (void)setImStreakDisplayManager:;
- (void)renderModel:context:;
- (id)avatarUrl;
- (id)customIMStreakTextPreferTheme;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)viewDidDisappearWithReason:;
- (double)dismissTimerInterval;
- (void)handleActionWithReason:;
- (id)trackingModelForScene:;
- (BOOL)enableVibrateWhileViewDidAppear;
- (double)customTransitionAnimationDuration:;
- (void)setNotificationOperator:;
- (id)oldView;
- (id)trackEnterFrom;
- (void)setOldView:;
- (BOOL)__normalChatLastMessageIsCompanyHasBeenUrgedReplyNotice:;
- (void)setMessageSenderOrRecallerVM:;
- (id)messageSenderOrRecallerVM;
- (id)__getDisplayTextWithChat:userViewModel:;
- (id)__attributedContentWithChatModel:;
- (id)__getDisplayNameForGroupWithChat:userViewModel:;
- (id)__attributedContent:;
- (BOOL)__normalChatLastMessageIsTextGreet:;
- (id)__originAttributedContent:;
- (id)__getPrefixWithChat:;
- (id)contentTextFont;
- (BOOL)__shouldShowPrefixWithChat:;
- (id)__getPrefixWithChatType:;
- (BOOL)__normalChatLastMessageIsLightInteraction:;
- (BOOL)__normalChatLastMessageIsTextGreetLightInteraction:;
- (BOOL)__normalChatLastMessageIsGreet:;
- (BOOL)__normalChatLastMessageIsLightCamera:;
- (BOOL)__normalChatLastMessageIsExchangeImage:;
- (BOOL)__normalChatLastMessageIsExchangeAnswer:;
- (BOOL)__normalChatLastMessageIsFacePuzzle:;
- (BOOL)__shouldAddChannelButton:;
- (BOOL)__normalChatLastMessageIsChangeBackgroundResponseNotice:;
- (BOOL)__shouldShowReplyButton:;
- (BOOL)__shouldShowFlamePetElfButton:;
- (void)setIsReplyButtonActionCustomized:;
- (void)trackPushViewTapWithReplyButtonTapped:;
- (void)__enterChatVC;
- (BOOL)__enableFloatReplyMessageV2;
- (void)__openChatViewController:;
- (void)__trackEnterChatEventWithNeedFloatMode:;
- (void)setIsTextPushType:;
- (void)trackGameInviteWithEvent:message:;
- (void)__trackChannelLiveShow:withAction:;
- (void)trackLinkLiveMessageWithEvent:message:;
- (BOOL)isEcommerceKefuIM;
- (BOOL)isReplyingLightCameraByReplyButton;
- (BOOL)isReplyButtonActionCustomized;
- (void)handleTapActionWithReplyButtonTapped:reason:;
- (void)__clickToAddShareLiveChannel:;
- (void)p_ariseSnackbar:;
- (void)setIsReplyingLightCameraByReplyButton:;
- (id)__noticeMessageSourcePath:;
- (void)updateSimplifiedLeftIcon;
- (void)updateSimplifiedRightActionAreaModel;
- (void)updateSimplifiedTitleAreaItems;
- (void)updateSimplifiedContent;
- (id)simplifiedDefaultAvatar;
- (id)simplifiedButtonText;
- (void)setupSimplifiedButtonAction;
- (void)__replyButtonClick;
- (id)simplifiedTitleText;
- (id)simplifiedContentText;
- (void)updateNonaggregatedLeftIcon;
- (void)updateNonaggregatedLeftExtraIcon;
- (void)updateNonaggregatedRightActionAreaModel;
- (void)updateNonaggregatedTitleAreaItemsForFormat;
- (void)updateNonaggregatedTitleAreaItems;
- (void)updateNonaggregatedContent;
- (id)nonaggregatedDefaultAvatar;
- (BOOL)__shouldHidePrivateLetter:;
- (id)extraIconImage;
- (void)shouldShowOnlineViewWithCompletion:;
- (id)nonaggregatedButtonTextWithChat:;
- (void)setupNonaggregatedButtonActionWithChat:;
- (id)nonaggregatedTitleFromChat:;
- (void)trackConsecutiveChatStatusShowWithColor:;
- (void)nonaggregatedContentTextWithCompletion:;
- (void)updateAggregatedLeftIcon;
- (void)updateAggregatedLeftExtraIcon;
- (void)updateAggregatedRightActionAreaModel;
- (void)updateAggregatedTitleAreaItems;
- (void)updateAggregatedContent;
- (id)aggregatedDefaultAvatar;
- (id)buttonTextWithIsAggregation:chat:;
- (void)setupButtonActionWithIsAggregation:chat:;
- (id)aggregatedTitleText;
- (void)recordEndInvokePushFrameworkWithTracDict:;
- (id)appendRenderMonitor:;
- (void)updateSimplifiedProperties;
- (void)updateNonaggregatedProperties;
- (void)updateAggregatedProperties;
- (void)p_trackInnerPushShowDetail:;
- (void)trackUpdateContentChat:trackID:;
- (void)__trackEventShowChat:trackID:;
- (void)__setupVibrateTrackParams:;
- (id)__chatType;
- (void)trackPushPerformanceIfNeededWithPushViewModel:chat:;
- (void)p_trackFormatEntranceShow:;
- (id)__imPushType;
- (BOOL)canInsertVideoWithReason:;
- (BOOL)isTextPushType;
- (id)appendExtraParamsToParams:;
- (void)consecutiveChatStatusWithCompletion:;
- (id)__imInteractionMessage;
- (void)setModel:;
- (id)businessType;
- (id)view;
- (id)viewModel;
- (id)model;
- (id)trackIdentifier;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)chat;
- (void)setChat:;
- (void)setTrackIdentifier:;
- (void)setCurrentView:;
- (id)currentView;
+ (void)p_asyncGetIESConvWithChat:completion:;
@end
