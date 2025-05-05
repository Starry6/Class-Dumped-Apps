@interface EDCachingMailboxPredictor : NSObject
@property (nonatomic) <EDMailboxPredictor> predictor;
@property (nonatomic) NSCache cache;
@property (nonatomic) NSMutableDictionary cacheKeysByProperty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictor;
- (void)setCache:;
- (void).cxx_destruct;
- (void)setPredictor:;
- (id)cache;
- (id)predictMailboxIDsForMessages:limit:diagnostics:;
- (id)initWithPredictor:;
- (void)invalidatePredictionsAffectedByMessage:;
- (void)removeAllPredictions;
- (id)_cacheKeyForMessages:;
- (void)_trackCacheKey:forPropertyKey:;
- (id)_propertyKeysForMessage:;
- (id)cacheKeysByProperty;
- (void)setCacheKeysByProperty:;
@end
