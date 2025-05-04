@interface AWETaskSpreadBizDowngradeInteractionDispatcher : AWETaskSpreadDispatcherBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)player:didChangePlaybackStateWithAction:;
- (void)cancelDispatchOnRightContainer;
- (void)_updateFitstFrameDelayTime;
- (id)init;
- (void)execute;
@end
