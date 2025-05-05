@interface BLSDiagnosticPresentationDateSpecifier : NSObject
@property (nonatomic) NSDate presentationDate;
@property (nonatomic) NSArray specifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specifiers;
- (id)presentationDate;
- (void)encodeWithXPCDictionary:;
- (id)bls_loggingString;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)bls_shortLoggingString;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPresentationDate:specifiers:;
+ (BOOL)supportsSecureCoding;
+ (id)createWithSpecifier:;
@end
