@interface CNPerContactPropertyKeyDescriptor : NSObject
@property (nonatomic) NSMutableDictionary propertiesByIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cn_executeGetterForRepresentedKeys:;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)_cn_ignorableKeys;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setKeysToFetch:forContactIdentifier:;
- (id)propertiesByIdentifier;
- (void)setPropertiesByIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
