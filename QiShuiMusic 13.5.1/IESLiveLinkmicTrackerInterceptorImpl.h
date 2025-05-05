@interface IESLiveLinkmicTrackerInterceptorImpl : NSObject
@property (nonatomic) NSMutableDictionary eventsMapper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSetAttachingDIContext;
- (id)eventsMapper;
- (void)injectEvent:params:;
- (void)injectEventParams:;
- (void)removeInjectEvent:;
- (void)removeInjectEvents:;
- (void)setEventsMapper:;
- (void)willCommitTrackEvent:params:;
- (void).cxx_destruct;
@end
