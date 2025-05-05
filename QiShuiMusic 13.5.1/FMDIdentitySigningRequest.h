@interface FMDIdentitySigningRequest : NSObject
@property (nonatomic) NSData dataToSign;
@property (nonatomic) BOOL useSCRT;
@property (nonatomic) q validityInMinutes;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)dataToSign;
- (void)setDataToSign:;
- (BOOL)useSCRT;
- (void)setUseSCRT:;
- (long long)validityInMinutes;
- (void)setValidityInMinutes:;
+ (BOOL)supportsSecureCoding;
@end
