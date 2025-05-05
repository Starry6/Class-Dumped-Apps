@interface STLive.LiveTrackerImp : NSObject
- (void)addAccessTokenToTracker:;
- (void)addOpenIDToTracker:;
- (void)trackADVsEvent:label:refer:eventType:adExtraData:;
- (void)trackEvent:params:;
- (void)updateOpenId;
- (id)sessionID;
- (id)init;
- (void).cxx_destruct;
@end
