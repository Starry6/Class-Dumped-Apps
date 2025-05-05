@interface TSPKTimeCacheStrategy : NSObject
@property (nonatomic) q duration;
@property (nonatomic) NSMutableDictionary lastTimeStampDict;
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastTimeStampDict;
- (BOOL)needUpdate:cacheStore:;
- (void)setLastTimeStampDict:;
- (id)init;
- (id)lock;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (void)setLock:;
+ (id)initWithDuration:;
+ (id)generate:;
@end
