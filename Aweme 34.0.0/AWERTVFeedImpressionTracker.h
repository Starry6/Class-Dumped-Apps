@interface AWERTVFeedImpressionTracker : NSObject
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVPerformanceMonitorInterface> performaceMonitor;
- (void)rxAwakeFromPropertyInjection;
- (id)performaceMonitor;
- (void)endLiveStreamPlayWithAwemeID:;
- (void)startLiveStreamPlayWithAwemeModel:roomID:isAnswer:isHost:;
- (void)trackAvatarLiveEntryShowWithAwemeModel:roomID:isAnswer:isHost:;
- (void)__trackeEvent:params:;
- (id)__awemePlayMarkerWithAwemeID:;
- (id)injector;
- (void).cxx_destruct;
@end
