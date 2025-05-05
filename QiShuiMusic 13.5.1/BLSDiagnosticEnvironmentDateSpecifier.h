@interface BLSDiagnosticEnvironmentDateSpecifier : NSObject
@property (nonatomic) BLSAlwaysOnDateSpecifier dateSpecifier;
@property (nonatomic) NSString environmentIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)bls_loggingString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)environmentIdentifier;
- (id)bls_shortLoggingString;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)dateSpecifier;
- (id)initWithDateSpecifier:environmentIdentifier:;
+ (BOOL)supportsSecureCoding;
+ (id)createWithSpecifier:;
@end
