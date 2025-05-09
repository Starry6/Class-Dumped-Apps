@interface IESLiveSaaSTrackerWrapper : NSObject
@property (nonatomic) <IESLiveSaaSLoginService> loginService;
@property (nonatomic) <IESLiveSaaSTracker> tracker;
@property (nonatomic) <IESLiveTrackerDelegate> trackerDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslivesaas_addOpenIDToTracker:;
- (void)trackADTag:label:refer:groupID:creativeID:logExtra:extraParams:;
- (id)trackerDelegate;
- (void)_trackEvent:params:;
- (void)ieslivesaas_addAccessTokenToTracker:;
- (void)ieslivesaas_trackEventWithoutPrefix:params:;
- (void)ieslivesaas_updateOpenId;
- (id)loginService;
- (void)playbackTrackEvent:params:;
- (void)setLoginService:;
- (void)setTrackerDelegate:;
- (void)trackADTag:label:extra:;
- (void)trackADVsEvent:label:refer:eventType:adExtraData:;
- (void)trackEvent:params:;
- (void)trackEventWithNoLivePrefix:params:;
- (void)trackEventWithoutLivePrefix:params:;
- (void)vsTrackEvent:params:;
- (void)vsTrackEvent:params:isLive:;
- (void)setTracker:;
- (id)sessionID;
- (id)tracker;
- (id)initWithTracker:;
- (void).cxx_destruct;
@end
