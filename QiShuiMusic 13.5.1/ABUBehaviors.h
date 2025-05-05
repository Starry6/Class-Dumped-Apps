@interface ABUBehaviors : NSObject
@property (nonatomic) NSMutableDictionary behaviors;
@property (nonatomic) q maxTtl;
@property (nonatomic) <ABUBehaviorEventLocalStorage> storage;
- (id)behaviorsOfRit:andAdn:andTtl:;
- (void)dataFromDB;
- (id)initWithtTtl:;
- (long long)maxTtl;
- (void)saveBehavior:;
- (void)setMaxTtl:;
- (void)updateInfoWithPrimeRit:andAdnName:andEventType:;
- (void)addBehavior:;
- (void)setStorage:;
- (void)setBehaviors:;
- (id)storage;
- (id)behaviors;
- (void).cxx_destruct;
@end
