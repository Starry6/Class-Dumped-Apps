@interface BDADetailNotificationCenter : NSObject
@property (nonatomic) NSPointerArray engines;
- (void)postNotification:data:;
- (void)removeEngine:;
- (void)setEngines:;
- (id)init;
- (id)engines;
- (void).cxx_destruct;
- (void)addEngine:;
+ (id)defaultCenter;
@end
