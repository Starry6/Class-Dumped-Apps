@interface BDATMStorage : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) NSMutableDictionary dictionary;
- (id)paramsForEventName:;
- (id)paramsForKey:forEventName:;
- (void)setAtmParams:forKey:forEventName:;
- (id)dictionary;
- (id)init;
- (void)setDictionary:;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)storage;
@end
