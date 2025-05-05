@interface TIStatisticChangeCache : NSObject
- (id)init;
- (id)flush;
- (void).cxx_destruct;
- (void)addValue:toStatisticWithName:andInputMode:;
- (void)addValue:toStatisticWithName:inCache:;
+ (id)sharedInstance;
@end
