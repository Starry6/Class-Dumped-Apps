@interface AWESECEventFlowModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hmdSceneDidChange;
- (void)setupTrackerEventSource;
- (void)setupPageStateEventSource;
- (void)handleEvent:;
- (id)subscriberId;
+ (void)startFeedReady;
+ (void)startHybridPluginRegister;
+ (id)shared;
@end
