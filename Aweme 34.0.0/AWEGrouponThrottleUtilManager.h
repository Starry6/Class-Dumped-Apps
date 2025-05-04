@interface AWEGrouponThrottleUtilManager : NSObject
@property (nonatomic) NSMutableDictionary throttleKeyDic;
@property (nonatomic) NSCondition throttleLock;
- (BOOL)isFunctionCanCall:object:sel:timeInterval:;
- (id)throttleLock;
- (id)throttleKeyDic;
- (double)getNowTime;
- (BOOL)throllteLeadingWithKey:timeInterval:;
- (BOOL)debounceLeadingWithKey:timeInterval:;
- (void)setThrottleKeyDic:;
- (void)setThrottleLock:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
