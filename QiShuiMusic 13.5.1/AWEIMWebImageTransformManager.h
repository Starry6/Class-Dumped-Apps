@interface AWEIMWebImageTransformManager : NSObject
@property (nonatomic) NSMutableDictionary transformDictionary;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
- (void)cacheTransform:key:;
- (void)setTransformDictionary:;
- (id)transformDictionary;
- (id)transformWithKey:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (void)cacheTransform:key:;
+ (id)transformWithKey:;
+ (id)sharedInstance;
@end
