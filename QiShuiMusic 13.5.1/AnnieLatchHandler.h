@interface AnnieLatchHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupAnnieLatch;
- (void)duringLynxViewBuilding:containerID:context:;
- (void)duringLynxViewBuildingWithAnnieXCard:builder:containerID:;
- (BOOL)enableLatchInAnnieXCard:;
- (BOOL)enableLatchWithContainer:;
- (BOOL)enableLatchWithQueryItems:;
- (void)fireWithAnnieXCard:kitView:;
- (void)fireWithContainer:kitView:;
- (void)onLynxViewCreated:;
- (void)onLynxViewCreatedWithAnnieXCard:;
- (void)reportCustomWithEventName:containerId:url:lynxView:metric:category:extra:maySample:;
- (void)reportCustomWithEventName:url:lynxView:metric:category:extra:maySample:;
- (void)stopWithAnnieXCard:;
- (void)stopWithContainer:;
+ (id)sharedInstance;
@end
