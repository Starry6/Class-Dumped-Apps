@interface ASAccountAuthenticationModificationReplacePasswordWithSignInWithAppleRequest : ASAccountAuthenticationModificationRequest
@property (nonatomic) NSString password;
@property (nonatomic) NSExtension extension;
@property (nonatomic) NSString user;
@property (nonatomic) ASCredentialServiceIdentifier serviceIdentifier;
@property (nonatomic) NSDictionary userInfo;
- (id)password;
- (id)userInfo;
- (id)extension;
- (id)serviceIdentifier;
- (id)user;
- (void).cxx_destruct;
- (id)initWithUser:password:extension:serviceIdentifier:userInfo:;
- (id)initWithUser:serviceIdentifier:userInfo:;
@end
