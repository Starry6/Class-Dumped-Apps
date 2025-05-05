@interface CNTestSmartFetcher : NSObject
@property (nonatomic) NSArray requiredKeys;
@property (nonatomic) NSArray optionalKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_cn_executeGetterForRepresentedKeys:;
- (id)_cn_optionalKeys;
- (id)_cn_requiredKeys;
- (id)_cn_ignorableKeys;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)requiredKeys;
- (id)initWithRequiredKeys:optionalKeys:;
- (id)optionalKeys;
+ (BOOL)supportsSecureCoding;
@end
