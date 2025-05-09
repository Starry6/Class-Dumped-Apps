@interface AWEProfileHeaderAvatarSectionController : AWEBaseListSectionController
@property (nonatomic) BOOL isEnteringLive;
@property (nonatomic) BOOL isLiveBlocked;
@property (nonatomic) NSMutableArray binds;
@property (nonatomic) <AWELiveUserAvatarPreviewProtocol> livePreviewManager;
@property (nonatomic) q livePreviewState;
@property (nonatomic) BOOL trackedPreviewPlayEvent;
@property (nonatomic) UIView currentAvatarView;
@property (nonatomic) @ delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (id)sizeForHeaderWithCollectionViewSize:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)viewControllerDidAppear:;
- (void)viewControllerDidDisappear:;
- (id)sizeForFooterWithCollectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)viewControllerWillAppear:isBeingPresented:isMovingToParentViewController:;
- (void)enterLiveRoom;
- (id)livePreviewManager;
- (void)setLivePreviewManager:;
- (id)binds;
- (void)setBinds:;
- (BOOL)isEnteringLive;
- (void)setIsEnteringLive:;
- (void)setIsLiveBlocked:;
- (BOOL)isLiveBlocked;
- (void)updateCompletionInfoIfNeed:avatarURL:;
- (void)changeAvatar:;
- (void)showProfileImagePreviewView;
- (void)showImagePreviewView:type:;
- (void)avatarTapedWithAvatarEditView:andDecorationHidden:;
- (void)avatarLiveDidShowAndTrackEvent;
- (void)avatarDecorationDidShowAndTrackEvent;
- (void)avatarDecorationWillShowAndTrackEvent;
- (void)liveBlockAudienceNotication:;
- (void)fetchLivePreviewStreamInCell:;
- (void)setCurrentAvatarView:;
- (BOOL)trackedPreviewPlayEvent;
- (void)setTrackedPreviewPlayEvent:;
- (void)reportFormatShowEvent;
- (void)reportLiveShowEvent;
- (void)updateAvatarTipsInfoWithOperationKey:;
- (id)currentAvatarView;
- (void)avatarTappedWithDecorationHidden:;
- (void)enterAdLiveRoom;
- (BOOL)shouldShowVirtualAvatarActionSheet;
- (void)showVirtualAvatarActionSheet;
- (BOOL)shouldShowGuestVirtualAvatarSpace;
- (void)showGuestVirtualAvatarSpace;
- (void)showNewStyleProfileAvatarPreview;
- (void)checkNeedTrackLivePreviewPlayEvent:;
- (void)livePreviewStreamPlayerSecondsControl:;
- (void)stopLivePreviewStream;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (Class)cellClass;
- (BOOL)showSeparator;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)livePreviewState;
- (void)setLivePreviewState:;
@end
