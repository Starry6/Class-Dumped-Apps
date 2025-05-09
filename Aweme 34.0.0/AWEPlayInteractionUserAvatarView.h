@interface AWEPlayInteractionUserAvatarView : UIView
@property (nonatomic) double followPromptViewBottomOffset;
@property (nonatomic) UIImageView avatarSendMessageImageView;
@property (nonatomic) UIImageView avatarEnterStoreImageView;
@property (nonatomic) UIView followedView;
@property (nonatomic) @? followedClickedBlock;
@property (nonatomic) BOOL enableLeftHandOptimize;
@property (nonatomic) UIView<AWEAdAvatarView> userAvatarView;
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) UIView<AWEFeedLiveMarkViewNewTypeHeadProtocol> liveMarkHeadView;
@property (nonatomic) UIView<AWEFeedLiveDecorateViewProtocol> liveDecorateView;
@property (nonatomic) UIImageView videoSourceImageView;
@property (nonatomic) UILabel friendLabel;
@property (nonatomic) UIView onlineDotView;
@property (nonatomic) UIView sendMessageView;
@property (nonatomic) AWEPlayInteractionUserAvatarGuideAnimationView sendMessageGuideView;
@property (nonatomic) AWEPopoverActionSheet userAvatarPopoverView;
@property (nonatomic) AFDLeftExtensionPopoverSheetView lightInteractionPopover;
@property (nonatomic) UIView enterStoreView;
@property (nonatomic) AWEPlayInteractionUserAvatarGuideAnimationView enterStoreGuideView;
@property (nonatomic) AWEPlayInteractionLinkIconContainerView linkIconContainerView;
@property (nonatomic) UIImageView userAvatarLinkIcon;
@property (nonatomic) LOTAnimationView followAnimationView;
@property (nonatomic) LOTAnimationView unfollowAnimationView;
@property (nonatomic) UIView followPromptView;
@property (nonatomic) BOOL canShowSpecialFollowEntrance;
@property (nonatomic) UIView<AWEFormatFeedEntryViewProtocol> formatMarkView;
@property (nonatomic) {CGSize=dd} followAnimationViewSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (BOOL)enableLeftHandOptimize;
- (void)setEnableLeftHandOptimize:;
- (void)setUserAvatarView:;
- (void)setLiveMarkView:;
- (void)setVideoSourceImageView:;
- (id)friendLabel;
- (void)setFriendLabel:;
- (void)setOnlineDotView:;
- (id)sendMessageView;
- (void)setSendMessageView:;
- (id)lightInteractionPopover;
- (void)setLightInteractionPopover:;
- (void)setEnterStoreView:;
- (id)userAvatarLinkIcon;
- (void)setUserAvatarLinkIcon:;
- (void)setFollowAnimationView:;
- (void)setUnfollowAnimationView:;
- (void)setFollowPromptView:;
- (BOOL)canShowSpecialFollowEntrance;
- (id)linkIconContainerView;
- (void)setLinkIconContainerView:;
- (void)playUnFollowAnimation;
- (void)playFollowAnimation:;
- (void)setEnableLeftHandOptimize:withPointInsideBlock:;
- (void)changeSendMessageViewWithFlag:;
- (void)updateFollowedViewHide:;
- (void)configFollowedClickedBlock:;
- (void)updateJXLayout;
- (void)lazyLoadLiveDecorateViewIfNeed;
- (id)userAvatarView;
- (id)liveMarkView;
- (void)updateAvatarCornerRadius:;
- (id)followedView;
- (id)followPromptView;
- (id)followAnimationView;
- (void)setCanShowSpecialFollowEntrance:;
- (id)avatarSendMessageImageView;
- (id)onlineDotView;
- (id)enterStoreView;
- (id)unfollowAnimationView;
- (id)videoSourceImageView;
- (void)makeConstraints;
- (id)liveDecorateView;
- (id)sendMessageGuideView;
- (id)enterStoreGuideView;
- (id)liveMarkHeadView;
- (id)userAvatarPopoverView;
- (id)formatMarkView;
- (void)followedViewClicked;
- (void)setFollowedView:;
- (BOOL)shouldShrinkRightInteractionElement;
- (void)setUserAvatarPopoverView:;
- (BOOL)expandFollowArea;
- (void)updateRightContainerElement;
- (double)followPromptViewBottomOffset;
- (id)followAnimationViewSize;
- (void)p_resetFollowAnimation;
- (id)followedClickedBlock;
- (void)setFollowedClickedBlock:;
- (id)opt_setupUserAvatarView:;
- (double)getLiveMarkViewWidth;
- (void)setAvatarSendMessageImageView:;
- (void)addShadowWithSuperView:imageView:widthHeight:;
- (void)setAvatarEnterStoreImageView:;
- (id)p_enterStoreIcon;
- (void)setLiveMarkHeadView:;
- (void)setLiveDecorateView:;
- (void)setFormatMarkView:;
- (void)setSendMessageGuideView:;
- (void)setEnterStoreGuideView:;
- (void)setFollowAnimationViewSize:;
- (void)setFollowPromptViewBottomOffset:;
- (id)avatarEnterStoreImageView;
- (id)init;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
+ (Class)aAWEPadModuleAdapterClass;
@end
