@interface LNDeferredLocalizedString : NSObject
@property (nonatomic) NSString localizedKeyWithParameters;
@property (nonatomic) NSArray parameterDefinitions;
@property (nonatomic) NSDictionary parametersForCAT;
@property (nonatomic) NSString localizedKey;
@property (nonatomic) NSArray arguments;
- (id)parameterDefinitions;
- (id)localizedKeyWithParameters;
- (id)parametersForCAT;
- (id)arguments;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)localizedKey;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithLocalizedKey:arguments:;
+ (BOOL)supportsSecureCoding;
@end
