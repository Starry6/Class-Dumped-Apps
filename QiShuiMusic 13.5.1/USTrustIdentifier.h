@interface USTrustIdentifier : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL trusted;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)trusted;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:trusted:;
- (void)_USTrustIdentifierCommonInitWithIdentifier:trusted:;
+ (BOOL)supportsSecureCoding;
+ (id)identifierWithIdentifier:trusted:;
@end
