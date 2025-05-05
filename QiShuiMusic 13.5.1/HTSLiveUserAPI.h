@interface HTSLiveUserAPI : HTSLiveApi
@property (nonatomic) @? userCallBack;
- (void)banUser:secUid:roomID:finished:;
- (void)applyCustomerServiceForAdminOperationWithUserID:actionType:roomID:scene:completion:;
- (void)changeAdministrateStatus:secUserId:setAdmin:roomID:anchorID:enterFromMerge:enterMethod:finished:;
- (void)changeFollowStatusToUser:secToUser:roomID:isFollow:secAnchorID:anchorID:extraParams:completion:;
- (void)fetchAdministrators:secAnchorID:roomID:completion:;
- (void)fetchBanUsers:offset:count:completion:;
- (void)fetchKickOutInfos:offset:count:completion:;
- (void)fetchUserAdminOperationInfoWithUserID:roomID:actionType:completion:;
- (void)fetchUserInfo:secTargetUid:roomID:anchorID:secAnchorID:requestFrom:fromRoomEnter:targetDisplayRole:tintTags:finished:;
- (void)fetchUserInfoWithParams:tintTags:finished:;
- (void)fetchUserProfileWithParamsModel:completion:;
- (void)fetchUserSettingInfoWithSecTargetUserID:anchorID:roomID:completion:;
- (void)kickout:secUserId:roomID:finished:;
- (void)managerAnonymousUserWithRoomID:didSilence:finished:;
- (void)requestMyLiveTabWithTabID:queryIndex:completion:;
- (void)selectUserProfileStyle:profileStyle:smartSwitchEnabled:completion:;
- (void)setUserCallBack:;
- (id)transformUserProfileExtraToUserExtra:;
- (void)unKickout:roomID:finished:;
- (void)unbanUser:secUid:roomID:finished:;
- (void)updateUserSettingInfoWithUserID:RoomID:anchorID:hasUserGiftSwitch:userGiftSwith:hasProfileStyle:profileStyle:completion:;
- (void)updateUserSettingInfoWithUserID:RoomID:anchorID:hasUserRelationSwitch:userRelationSwith:completion:;
- (id)userCallBack;
- (void).cxx_destruct;
@end
