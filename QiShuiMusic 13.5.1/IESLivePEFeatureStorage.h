@interface IESLivePEFeatureStorage : NSObject
@property (nonatomic) <HTSKVStore> kvStore;
@property (nonatomic) GetFeaturesResponse features;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateFeatures:;
- (id)featureDictionary;
- (id)featureExtra;
- (id)readFeaturesWithKey:;
- (void)writeFeatures:toKey:;
- (void)setKvStore:;
- (id)kvStore;
- (id)init;
- (void)dealloc;
- (void)setFeatures:;
- (void)setup;
- (void).cxx_destruct;
- (id)features;
@end
