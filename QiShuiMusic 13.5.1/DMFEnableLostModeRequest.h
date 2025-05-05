@interface DMFEnableLostModeRequest : DMFTaskRequest
@property (nonatomic) NSString message;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString footnote;
- (id)phoneNumber;
- (void)setMessage:;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)message;
- (void).cxx_destruct;
- (void)setFootnote:;
- (id)footnote;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
