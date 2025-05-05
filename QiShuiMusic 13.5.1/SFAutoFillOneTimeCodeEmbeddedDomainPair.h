@interface SFAutoFillOneTimeCodeEmbeddedDomainPair : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) BOOL strict;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
- (BOOL)isEqual:;
- (BOOL)strict;
- (void)setStrict:;
+ (BOOL)supportsSecureCoding;
@end
