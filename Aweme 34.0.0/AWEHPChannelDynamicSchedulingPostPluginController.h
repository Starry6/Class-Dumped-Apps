@interface AWEHPChannelDynamicSchedulingPostPluginController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addNotification;
- (void)topChannelControllerViewDidLoad:;
- (void)topChannelControllerViewDidResume:;
- (void)topChannelController:channelEnterWithModel:;
- (void)topChannelControllerViewDidAppear:;
- (void)topChannelControllerScrollViewDidFinishSliding:;
- (void)addMemoryObserver;
- (void)handleTabBarEndLanding:;
- (void)p_performSelectorTriggerFailStrategy:;
- (double)p_channelDynamicSchedulingStayForTriggerTime;
- (void)p_triggerFailStrategy:;
- (id)init;
@end
