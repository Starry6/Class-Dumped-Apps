@interface CTODAPlan : CTPlan
@property (nonatomic) NSString mcc;
@property (nonatomic) NSString mnc;
@property (nonatomic) NSString gid1;
@property (nonatomic) NSString gid2;
@property (nonatomic) NSString setupURL;
@property (nonatomic) NSString handoffToken;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)mcc;
- (id)mnc;
- (id)gid1;
- (id)gid2;
- (id)initWithSetupUrl:mcc:mnc:gid1:gid2:handoffToken:;
- (id)setupURL;
- (id)handoffToken;
+ (BOOL)supportsSecureCoding;
@end
