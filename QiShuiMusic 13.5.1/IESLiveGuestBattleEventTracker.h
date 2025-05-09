@interface IESLiveGuestBattleEventTracker : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) IESLiveInteractionBattleFullLinkMonitor monitor;
@property (nonatomic) NSString lastTraceWinUid;
@property (nonatomic) q lastTraceWinLevel;
@property (nonatomic) NSMutableArray tracedLosers;
@property (nonatomic) NSString finishReason;
@property (nonatomic) NSString finishUserId;
@property (nonatomic) NSMutableDictionary loadTimestampDict;
@property (nonatomic) q isRecorded;
@property (nonatomic) BOOL isStartHandler;
@property (nonatomic) NSString requestPage;
- (id)lastTraceWinUid;
- (void)setRequestPage:;
- (id)KeyStrWithkey:;
- (id)getPlayStageStr;
- (id)appendCommonExtra:;
- (BOOL)checkShouldTraceCrownShowWithRole:level:withUid:;
- (void)cleanCrownShowRecord;
- (void)didSetAttachingDIContext;
- (id)finishReason;
- (id)finishUserId;
- (id)getPlayLayoutStr;
- (id)getSubStageStr;
- (id)initWithRoom:eventContext:;
- (long long)isRecorded;
- (BOOL)isStartHandler;
- (long long)lastTraceWinLevel;
- (id)loadTimestampDict;
- (void)monitorIMWithName:message:extra:;
- (void)monitorStartGuestBattleLoadDurationIfNeed;
- (void)monitorWithAPIPath:requestTimestamp:error:response:extra:;
- (void)monitorWithName:extra:eventType:;
- (id)playStage;
- (void)recordTimestampWithKey:;
- (double)relativeTimestampWithKey:;
- (id)requestPage;
- (void)setEventContext:;
- (void)setFinishReason:;
- (void)setFinishUserId:;
- (void)setIsRecorded:;
- (void)setIsStartHandler:;
- (void)setLastTraceWinLevel:;
- (void)setLastTraceWinUid:;
- (void)setLoadTimestampDict:;
- (void)setTracedLosers:;
- (id)tracedLosers;
- (void)trackCrownIfNeedShowWithRole:level:withUid:;
- (void)trackSettingsPageWithActionType:withButtonType:;
- (void)trackWithEvent:extra:;
- (void)tryInsertDuration:withKey:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)eventContext;
- (id)room;
- (void)setRoom:;
@end
