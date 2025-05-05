@interface BDLynxMonitorPool : NSObject
@property (nonatomic) NSMutableDictionary lynxViewMap;
- (void)setLynxViewMap:;
- (id)lynxViewMap;
- (void).cxx_destruct;
+ (id)lynxViewForContainerID:;
+ (void)removeforContainerID:;
+ (void)setLynxView:forContainerID:;
+ (id)sharedPool;
@end
