@interface IESLiveMultiLinkerStreamLayoutUtils : NSObject
+ (id)sessionsAfterRTCInfoCheck:userService:rtcInfoModel:;
+ (id)sessionsAfterStreamSwitchCheck:userService:;
+ (id)sortAndMockIfNeedWithSessions:randomTeamLayoutModel:;
+ (id)sortSessionForLayoutType:layoutModel:userService:isStreamLayout:;
@end
