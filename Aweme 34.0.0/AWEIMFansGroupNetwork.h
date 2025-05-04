@interface AWEIMFansGroupNetwork : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchMasterFansGroupInfoWithCursor:fansNumber:conversationID:completion:;
- (void)fetchMasterFansGroupInfoWithCursor:conversationID:scene:completion:;
- (void)fetchGuestFansGroupInfoWithSecUid:onlyShowJoined:extraInfo:completion:;
- (void)fetchRecommendFansGroupInfoWithSecUid:recommendGroupIds:completion:;
- (void)remindCreateFansGroupWithSecUid:source:completion:;
- (void)createFansGroupWithCreateFansGroupModel:groupEntryLimitDict:completion:;
- (void)createFansGroupWithCreateFansGroupModel:groupEntryLimitDict:sourceType:createType:createExtra:bizExtra:completion:;
- (void)updateMyExportFansGroupWithCids:source:completion:;
- (void)applyJoinFansGroupWithCid:sourceType:completion:;
- (void)applyJoinFansGroupWithCid:sourceType:invitationExtra:bizExtra:completion:;
- (void)trackFetchMyGroupListWithScene:isFirstRequest:duration:response:error:;
- (void)trackFetchOtherGroupListWithScene:secOwnerId:duration:response:error:;
- (void)trackSetUserGroupListWithScene:cids:duration:response:error:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
