@interface AWELiveTrackerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (void)trackEventWithNoLivePrefix:params:;
- (void)setTrackerDelegate:;
- (void)vsTrackEvent:params:;
- (void)vsTrackEvent:params:isLive:;
- (void)trackADTag:label:extra:;
- (void)trackADTag:label:refer:groupID:creativeID:logExtra:extraParams:;
- (void)trackADTag:label:refer:creativeID:logExtra:adID:adExtraData:;
- (void)trackADVsEvent:label:refer:eventType:adExtraData:;
- (void)trackLiveRoomADLabel:extra:;
- (BOOL)checkCanTrackAdVs:;
@end
