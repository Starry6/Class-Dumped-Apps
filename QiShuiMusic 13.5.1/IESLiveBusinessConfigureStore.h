@interface IESLiveBusinessConfigureStore : NSObject
@property (nonatomic) NSMutableDictionary businessHandlerMap;
@property (nonatomic) NSMutableArray timerModellArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessHandlerMap;
- (void)componentOrientationChanged:;
- (void)componentOrientationTransitionBegin:;
- (void)didSetAttachingDIContext;
- (void)handleBusinesViewModel:;
- (void)registeModelType:withHandler:;
- (void)setBusinessHandlerMap:;
- (void)setTimerModellArray:;
- (void)timerArrived:;
- (id)timerModellArray;
- (void)timerNeverArrived:;
- (id)init;
- (void).cxx_destruct;
@end
