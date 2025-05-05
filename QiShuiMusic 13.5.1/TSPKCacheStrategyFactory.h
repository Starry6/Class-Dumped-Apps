@interface TSPKCacheStrategyFactory : NSObject
@property (nonatomic) NSMutableDictionary globalStategties;
- (id)getStrategy:params:;
- (id)globalStategties;
- (void)setGlobalStategties:;
- (id)init;
- (void).cxx_destruct;
+ (id)getStrategy:params:;
+ (id)sharedFactory;
@end
