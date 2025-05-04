@interface AWETimorEventListenerManager : NSObject
@property (nonatomic) NSMutableArray eventListeners;
- (void)addTimorEventListener:subscribeEvent:;
- (void)removeTimorEventListener:;
- (id)init;
- (void).cxx_destruct;
- (id)eventListeners;
- (void)setEventListeners:;
+ (id)shareInstance;
@end
