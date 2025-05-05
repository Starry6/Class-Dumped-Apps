@interface HTSLivePKApi : HTSLiveApi
@property (nonatomic) NSNumber roomID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRoomID:;
- (void)rejectAutoMatchInvite:inviteUserID:roomID:extraParams:callback:;
- (void)searchForResultWith:offset:count:searchID:searchScene:callback:;
- (id)abMapJsonString;
- (void)autoMatchWithFirst:matchType:subType:isHighWay:speedLevel:preferNewAnchor:gameId:extraParams:finished:;
- (void)battleRivalsWithEntrance:tabType:openTabName:recommendType:callback:;
- (void)battleRivalsWithEntrance:tabType:openTabName:recommendType:flexActivityID:flexActivityEntranceType:recommendSelectType:loadType:isFirst:requestSource:callback:;
- (void)cancelAutoMatchWithMatchType:gameId:completion:;
- (void)fetchFeedbackCategoriesAtScene:extraParams:callback:;
- (void)getBattleConfigWith:callback:;
- (void)getBattleSettingsWithRoomID:userID:secUid:settingScene:callback:;
- (void)pkBlockListWithType:roomId:userId:cursor:count:callback:;
- (void)pkRecordWithOffset:count:fromType:callback:;
- (void)registerFlexActivityWithID:callback:;
- (void)replyPrecisionMatchWithOption:source:precisionMatchID:flexActivityID:notDisturb:callback:;
- (void)searchForSuggestWordsWith:callback:;
- (id)stringValueForScene:;
- (void)updateBattleSettings:withRoomID:secUid:callback:;
- (void)uploadFeedbackWithScene:params:completion:;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:;
@end
