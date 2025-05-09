@interface IESLiveUserCardViewModel : NSObject
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) <IESLiveRoomServiceAdapter> mixedRoom;
@property (nonatomic) IESLiveUserCardBasicAbility usercardBasicAbility;
@property (nonatomic) NSObject<OS_dispatch_group> fetchUserCardDataGroup;
@property (nonatomic) IESLiveUserProfileData dataPlaceHolder;
@property (nonatomic) IESLiveUserProfileData dataCurrent;
@property (nonatomic) BOOL userPrefetch;
@property (nonatomic) NSDictionary userRelationInfo;
@property (nonatomic) IESLiveUserCardConfig previousConfig;
@property (nonatomic) UIView usercardContainer;
@property (nonatomic) IESLiveUserCardMonitor usercardMonitor;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isShowingAnonymousReportAlert;
@property (nonatomic) q showingToastOnlyID;
@property (nonatomic) IESLiveUserCardProfileSettingView profileSettingView;
@property (nonatomic) BOOL isFollowUserSuccess;
@property (nonatomic) BOOL hasPopup;
@property (nonatomic) <IESLiveSubscription> disposable;
@property (nonatomic) q skipPrivacyLevel;
@property (nonatomic) IESLiveUserCardPopupItemModel popupItemModel;
@property (nonatomic) <IESLiveUserCardDidFinishedAction> finishedAction;
@property (nonatomic) BOOL myLiveEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dataPlaceHolder;
- (void)dismissUserCard;
- (void)setDataCurrent:;
- (void)showAdminSheet:;
- (void)tr_clickUserCardEventWithStore:;
- (id)usercardMonitor;
- (BOOL)canShowUser:secUserId:withConfig:;
- (BOOL)checkUserCardDataWithUserID:userProfileData:error:;
- (id)componentContext;
- (void)createPopupItemWithPopupModel:;
- (id)createPopupItemWithUserCardStore:;
- (id)createUserCardStoreWithData:userProfileConfig:;
- (id)createViewWithUserCardStore:;
- (id)customAnimationWithDuration:rateCurve:;
- (id)dataCurrent;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (id)fetchUserCardDataGroup;
- (id)finishedAction;
- (void)followUserSuccess;
- (long long)getFromRoleWithMyRole:;
- (id)getShopIds;
- (long long)getToRoleWithItsRole:user:;
- (long long)getToRoleWithItsRole:user:profile:;
- (id)getUserRelationInfoWithParams:;
- (BOOL)hasPopup;
- (id)initWithRoom:trackContext:componentContext:;
- (BOOL)isFollowUserSuccess;
- (BOOL)isHostWithUID:;
- (BOOL)isLinkMicSource:;
- (BOOL)isOtherAnchor:userID:;
- (BOOL)isShowingAnonymousReportAlert;
- (id)mixedRoom;
- (BOOL)myLiveEnabled;
- (unsigned long long)p_currentUserRole;
- (unsigned long long)p_previewUserRoleWithUser:config:ownRoom:;
- (id)popupItemModel;
- (void)prefetchUserCardWithUserID:secUserId:source:;
- (id)previewTypeWithMyRole:itsRole:toUserID:;
- (id)previousConfig;
- (void)processAdminOperationTypeResponse:userID:actionType:backupAction:cancelAction:scene:;
- (id)profileSettingView;
- (void)reportRoomWithUser:functionType:;
- (void)requestUserCard:secUid:room:config:specialScene:completion:;
- (void)requestUserCardWithUserID:secUserId:config:closeBlock:;
- (void)setComponentContext:;
- (void)setDataPlaceHolder:;
- (void)setDisposable:;
- (void)setFetchUserCardDataGroup:;
- (void)setFinishedAction:;
- (void)setHasPopup:;
- (void)setIsFollowUserSuccess:;
- (void)setIsShowing:;
- (void)setIsShowingAnonymousReportAlert:;
- (void)setMixedRoom:;
- (void)setMyLiveEnabled:;
- (void)setPopupItemModel:;
- (void)setPreviousConfig:;
- (void)setProfileSettingView:;
- (void)setShowingToastOnlyID:;
- (void)setSkipPrivacyLevel:;
- (void)setTrackContext:;
- (void)setUserPrefetch:;
- (void)setUserRelationInfo:;
- (void)setUsercardBasicAbility:;
- (void)setUsercardContainer:;
- (void)setUsercardMonitor:;
- (BOOL)shouldShowUser:secUserId:config:requestFrom:myRole:;
- (void)showReportConfirmView:secUserId:withConfig:withRequestFrom:withMyRole:;
- (void)showReportView:reportContent:messageId:isChat:source:;
- (void)showReportViewForPrivacyMode:secUserId:withConfig:withRequestFrom:;
- (void)showReportViewForPrivacyMode:secUserId:withConfig:withRequestFrom:withMyRole:;
- (void)showUser:secUserId:withConfig:;
- (void)showUserCardWithConfig:dispatch_group_t:closeBlock:;
- (void)showUserCardWithUserID:secUserId:withConfig:closeBlock:;
- (void)showUserModel:withConfig:;
- (long long)showingToastOnlyID;
- (long long)skipPrivacyLevel;
- (id)trackContext;
- (void)trackeUserCardSettingViewShow;
- (void)unfollowAnchorSuccess;
- (BOOL)userPrefetch;
- (id)userRelationInfo;
- (id)usercardBasicAbility;
- (id)usercardContainer;
- (BOOL)isShowing;
- (void)clear;
- (void).cxx_destruct;
@end
