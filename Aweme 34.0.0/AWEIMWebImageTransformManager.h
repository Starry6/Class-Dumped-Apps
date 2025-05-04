@interface AWEIMWebImageTransformManager : NSObject
@property (nonatomic) NSMutableDictionary transformDictionary;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
- (id)transformWithKey:;
- (void)cacheTransform:key:;
- (void)setTransformDictionary:;
- (id)transformDictionary;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)transformWithKey:;
+ (void)cacheTransform:key:;
+ (id)sharedInstance;
@end
