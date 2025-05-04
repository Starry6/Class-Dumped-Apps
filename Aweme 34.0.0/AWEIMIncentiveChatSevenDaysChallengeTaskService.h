@interface AWEIMIncentiveChatSevenDaysChallengeTaskService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)ifNeed7DaysChallengeTaskCompleteInfoFromOtherInfoWithUid:cid:;
- (void)handleCommandMessageUpdateWithDict:;
- (void)handleOtherInfoTaskCompleteWithDict:;
- (BOOL)canShow7DaysChallengeAcbWithCid:conversation:;
- (void)handle7DaysChallengeAcbClickActionWithTransitionInfo:;
- (BOOL)p_checkTodayHasCompleteTaskWithUid:cid:;
- (void)p_updateStorageAndSendNotiIfNeededWithDict:source:;
- (id)p_taskCompleteStorageCacheKeyWithUid:cid:;
- (void)p_updateStorageAndSendNotiWithData:source:;
@end
