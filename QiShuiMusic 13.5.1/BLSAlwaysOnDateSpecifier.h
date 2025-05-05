@interface BLSAlwaysOnDateSpecifier : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) q fidelity;
@property (nonatomic) @ userObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)newSpecifierWithMaxFidelity:;
- (void)encodeWithXPCDictionary:;
- (id)bls_loggingString;
- (id)userObject;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)bls_shortLoggingString;
- (id)date;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (long long)fidelity;
- (id)initWithDate:fidelity:userObject:;
- (BOOL)isEqual:;
- (id)initWithDate:fidelity:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
