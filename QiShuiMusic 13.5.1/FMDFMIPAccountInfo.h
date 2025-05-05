@interface FMDFMIPAccountInfo : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString oneTimeRemoveAuthToken;
@property (nonatomic) NSURL serverURL;
- (id)username;
- (id)dsid;
- (void)setDsid:;
- (void)setUsername:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)serverURL;
- (void)setServerURL:;
- (id)oneTimeRemoveAuthToken;
- (id)initWithUserName:dsid:oneTimeRemoveAuthToken:serverURL:;
- (void)setOneTimeRemoveAuthToken:;
+ (BOOL)supportsSecureCoding;
@end
