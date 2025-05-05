@interface IESLiveEffectsLRUCacheCleanerConfig : NSObject
@property (nonatomic) q capacity;
@property (nonatomic) q redLineCapacity;
@property (nonatomic) q trimSize;
@property (nonatomic) NSString cacheKey;
@property (nonatomic) NSString identifier;
- (long long)redLineCapacity;
- (id)initWithIdentifier:capacity:redLineCapacity:trimSize:;
- (id)initWithIdentifier:serverConfig:clientConfig:;
- (void)setRedLineCapacity:;
- (void)setTrimSize:;
- (long long)trimSize;
- (void)updateWithCapacity:redLineCapacity:;
- (long long)capacity;
- (void)setCapacity:;
- (id)cacheKey;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (void)setCacheKey:;
@end
