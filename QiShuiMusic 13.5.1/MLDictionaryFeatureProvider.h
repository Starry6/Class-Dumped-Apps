@interface MLDictionaryFeatureProvider : NSObject
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSSet featureNames;
- (id)dictionary;
- (void)setDictionary:;
- (id)initWithDictionary:error:;
- (id)featureValueForName:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (id)featureNames;
- (id)initWithFeatureValueDictionary:;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)initWithFeatureProvider:;
- (id)initWithFeatureProvider:featureNames:;
+ (BOOL)supportsSecureCoding;
@end
