@interface AMSBuyParams : NSObject
@property (nonatomic) NSDictionary normalizedDictionary;
@property (nonatomic) double price;
@property (nonatomic) NSDictionary dictionary;
- (BOOL)containsKey:;
- (id)dictionary;
- (id)init;
- (id)initWithString:;
- (id)initWithCoder:;
- (void)setProperty:forKey:;
- (id)propertyForKey:;
- (void)setObject:forKeyedSubscript:;
- (void)encodeWithCoder:;
- (void)setParameter:forKey:;
- (id)objectForKeyedSubscript:;
- (void)clear;
- (id)stringValue;
- (void).cxx_destruct;
- (id)description;
- (double)price;
- (id)copyWithZone:;
- (id)normalizedDictionary;
- (id)parameterForKey:;
- (id)requestDataWithError:;
- (id)_normalizedDictionary;
- (void)_parseBuyParams:;
+ (BOOL)supportsSecureCoding;
+ (id)buyParamsWithString:;
@end
