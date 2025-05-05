@interface SSDownloadPolicyUserDefaultState : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSNumber fallbackNumberValue;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL shouldInvertBoolValue;
@property (nonatomic) BOOL currentBoolValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (id)key;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setKey:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setShouldInvertBoolValue:;
- (void)setFallbackNumberValue:;
- (BOOL)currentBoolValue;
- (id)fallbackNumberValue;
- (BOOL)shouldInvertBoolValue;
+ (BOOL)supportsSecureCoding;
@end
