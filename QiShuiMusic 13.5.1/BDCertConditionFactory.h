@interface BDCertConditionFactory : NSObject
@property (nonatomic) NSCache cache;
@property (nonatomic) NSDictionary conditionClassMap;
- (id)conditionClassMap;
- (id)conditionWithModel:;
- (void)initCache;
- (void)initClassMap;
- (void)setConditionClassMap:;
- (id)init;
- (void)setCache:;
- (void).cxx_destruct;
- (id)cache;
+ (id)conditionWithModel:;
+ (id)sharedInstance;
@end
