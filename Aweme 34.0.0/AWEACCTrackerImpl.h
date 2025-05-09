@interface AWEACCTrackerImpl : NSObject
@property (nonatomic) @? aspectBlock;
@property (nonatomic) NSArray aspectEventLists;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:;
- (void)trackLogData:;
- (void)trackEvent:label:value:extra:attributes:;
- (void)track:params:;
- (void)trackEvent:params:needStagingFlag:;
- (void)trackEvent:params:context:;
- (void)trackEvent:paramsGenerate:;
- (BOOL)p_disableDeprecatedTrackMethods;
- (void)logTrackerEvent:params:label:;
- (void)p_doTrack:params:;
- (void)p_doTrackEvent:params:;
- (void)p_doTrackEvent:params:customInfo:;
- (void)setAspectEventLists:;
- (void)setAspectBlock:;
- (id)aspectEventLists;
- (id)aspectBlock;
- (void)hdmTrackEvent:params:;
- (void)hdmTrackEvent:params:context:;
- (void)aspectForEvents:block:;
- (void)trackEvent:params:customInfo:;
- (void)trackEvent:attributes:;
- (void).cxx_destruct;
- (id)deviceID;
@end
