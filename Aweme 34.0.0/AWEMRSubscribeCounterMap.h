@interface AWEMRSubscribeCounterMap : NSObject
@property (nonatomic) NSMutableDictionary map;
- (void)registerCounterForKey:observer:;
- (void)increaseCounterForKey:;
- (void)decreaseCounterForKey:;
- (id)init;
- (id)map;
- (void)setMap:;
- (void).cxx_destruct;
@end
