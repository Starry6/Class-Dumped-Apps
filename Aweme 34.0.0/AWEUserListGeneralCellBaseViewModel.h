@interface AWEUserListGeneralCellBaseViewModel : NSObject
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) <AWEIMActiveUserInfoService> activeInfo;
@property (nonatomic) double relationButtonWidth;
@property (nonatomic) AWEUserButtonStateMachine stateMachine;
@property (nonatomic) NSString relationButtonTitle;
@property (nonatomic) BOOL relationButtonIsAttention;
@property (nonatomic) UIImage relationButtonIcon;
@property (nonatomic) AWEPageContext cellContext;
@property (nonatomic) NSObject<AWEUserListGeneralCellBusinessModelProtocol> businessModel;
@property (nonatomic) BOOL hasVerifiedIcon;
@property (nonatomic) UIImage verifiedIconImage;
@property (nonatomic) AWESocialRelationObserver mateStatusObserver;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (id)referString;
- (void)didFinishFollowUser:status:error:;
- (void)didFinishUnFollowUser:status:error:;
- (void)didFinishBlockUser:status:;
- (void)didFinishUnBlockUser:status:;
- (void)didFinishHideMyPostFromUser:status:;
- (void)didFinishApproveUserFollowRequest:error:;
- (void)didFinishShowMyPostToUser:status:;
- (void)didFinishHidePostFromHer:status:;
- (void)didFinishUnHidePostFromHer:status:;
- (void)didFinishTapTAIsFriendWithUser:isFriend:;
- (void)didFinishCloseFriendsWithUser:status:;
- (void)didFinishSetRemarkWithUser:;
- (void)didFinishRemoveFansWithUser:;
- (id)enterMethod;
- (id)enterFrom;
- (void)didChangePrivateRelationWithUser:relationType:relationValue:;
- (id)relationTag;
- (id)activeInfo;
- (id)subTitleTextColor;
- (long long)prePageType;
- (void)setBusinessModel:;
- (id)businessModel;
- (id)avatarURLList;
- (void)setActiveInfo:;
- (long long)fromPageType;
- (BOOL)isFriends;
- (BOOL)needMarkFriends;
- (id)verifiedIconImage;
- (unsigned long long)activeUserSourceType;
- (void)p_observeMateStatus;
- (void)setVerifiedIconImage:;
- (void)p_updateMateRelation:;
- (void)setMateStatusObserver:;
- (id)mateStatusObserver;
- (id)lightInteractionContext;
- (id)relationContext;
- (long long)avatarScale;
- (BOOL)shouldShowVerifiedIcon;
- (id)subTitleAttributedString;
- (id)subtitleTruncationToken;
- (long long)subtitleNumberOfLines;
- (id)subtitleHitTestInsets;
- (BOOL)shouldShowRelationTag;
- (id)relationTagAttributedString;
- (id)relationTagTextColor;
- (id)relationTagBackgroundColor;
- (id)relationTagEdgeInsets;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (id)extraRelationButtonStates;
- (id)extraRelationButtonTransitions;
- (BOOL)disableDefaultButtonRefresh;
- (id)relationButtonTitleColor;
- (id)relationButtonBackgroundColor;
- (BOOL)shouldShowMoreActionButton;
- (id)moreActionButtonSupportedFunctions;
- (id)moreButtonTappedBlock;
- (BOOL)shouldShowUnreadView;
- (BOOL)shouldShowDisclosureIndicator;
- (BOOL)shouldShowBottomLineView;
- (double)disclosureIndicatorIconSize;
- (BOOL)shouldShowCheckBox;
- (BOOL)checkBoxSelected;
- (id)checkBoxTintColor;
- (id)bigFontAutoLengthBlock;
- (id)bigFontAutoFontSizeBlock;
- (id)lightInteractionExtraParams;
- (id)followExtraParams;
- (id)lightActionSource;
- (BOOL)shouldShowOnlineView;
- (BOOL)hasVerifiedIcon;
- (id)relationButtonTitle;
- (id)relationButtonIcon;
- (id)lightInteractionActionContainerView;
- (double)relationButtonWidth;
- (void)didBindToCellWithContext:;
- (BOOL)enableLongPressGesture;
- (id)uniqueFlag;
- (id)initWithUserModel:businessModel:;
- (void)calculateRelationButtonWidth;
- (void)didUpdateActiveInfo;
- (void)refreshCellUI;
- (void)fetchVerifiedIconIfNeeded;
- (void)monitorActiveStatusIfNeeded;
- (void)setHasVerifiedIcon:;
- (void)setRelationButtonWidth:;
- (id)setupStates;
- (id)lightInteractionActionDestinationView;
- (void)setRelationButtonTitle:;
- (void)setRelationButtonIcon:;
- (void)setRelationButtonIsAttention:;
- (id)transitionToSendMsgWithoutLightInteraction;
- (BOOL)relationButtonIsAttention;
- (id)p_buildMoreActionContext;
- (void)userStatusChanged;
- (void)longPressAction;
- (void)dealloc;
- (id)setupTransitions;
- (id)accountType;
- (void)commonInit;
- (id)subTitle;
- (id)cellBackgroundColor;
- (long long)channelID;
- (void)setStateMachine:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (id)title;
- (id)stateMachine;
- (id)attributedTitle;
- (double)avatarSize;
- (id)pageIdentifier;
- (id)moreActions;
- (void)setCellContext:;
- (id)cellContext;
@end
