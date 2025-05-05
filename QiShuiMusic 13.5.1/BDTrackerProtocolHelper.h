@interface BDTrackerProtocolHelper : NSObject
+ (id)installInstance;
+ (void)setTrackerType:;
+ (id)sessionInstance;
+ (void)activateDeviceWithRetryTimes:completionHandler:;
+ (void)bdTrackEventWithCustomKeys:label:value:source:extraDic:;
+ (Class)bdtrackerCls;
+ (BOOL)isDeviceActivated;
+ (void)observeDeviceDidRegistered:;
+ (Class)trackerCls;
+ (long long)trackerType;
+ (void)ttTrackEventWithCustomKeys:label:value:source:extraDic:;
+ (id)tttrackerClientDID;
+ (Class)tttrackerCls;
+ (id)tttrackerDeviceID;
+ (id)tttrackerInstallID;
+ (id)tttrackerSessionID;
@end
