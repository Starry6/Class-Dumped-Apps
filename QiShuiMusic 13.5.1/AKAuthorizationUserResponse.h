@interface AKAuthorizationUserResponse : NSObject
@property (nonatomic) <AKCredentialRequestProtocol> selectedRequest;
@property (nonatomic) AKAuthorizationScopesUserSelection userSelection;
@property (nonatomic) NSNumber loginChoice;
@property (nonatomic) NSString rawAccountPassword;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)selectedRequest;
- (void)setSelectedRequest:;
- (id)userSelection;
- (void)setUserSelection:;
- (id)loginChoice;
- (void)setLoginChoice:;
- (id)rawAccountPassword;
- (void)setRawAccountPassword:;
+ (BOOL)supportsSecureCoding;
@end
