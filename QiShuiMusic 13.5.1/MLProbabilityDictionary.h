@interface MLProbabilityDictionary : NSDictionary
@property (nonatomic) MLProbabilityDictionarySharedKeySet labelIndexMap;
@property (nonatomic) <MLProbabilityDictionaryStorage> storage;
- (id)initWithObjects:forKeys:count:;
- (id)keyEnumerator;
- (id)storage;
- (id)objectForKey:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithLabelIndexMap:storage:;
- (id)initWithSharedKeySet:probabilityMultiArray:;
- (id)initWithSharedKeySet:probabilities:;
- (id)initWithSharedKeySet:probabilityArray:;
- (id)initWithLabels:probabilityArray:;
- (id)initWithLabels:probabilities:;
- (id)classLabelOfMaxProbability;
- (id)labelIndexMap;
+ (id)sharedKeySetForLabels:;
@end
