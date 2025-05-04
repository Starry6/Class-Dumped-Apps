@interface AWEIMVmojiRecentComponent : NSObject
@property (nonatomic) Q cacheSize;
@property (nonatomic) <IESIMThrottleDebounceAction> throttle;
@property (nonatomic) NSMutableArray cacheArray;
- (void)saveEmoticonModel:;
- (id)cacheArray;
- (void)setCacheArray:;
- (id)cachedModelArray;
- (id)throttle;
- (void)saveToDisk;
- (unsigned long long)cacheSize;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setCacheSize:;
- (void)setThrottle:;
+ (id)cacheKey;
@end
