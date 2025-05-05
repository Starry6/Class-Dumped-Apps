@interface ASAuthorizationAppleIDProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createRequest;
- (void)credentialStateDidChange:completion:;
- (void)getCredentialStateForUserID:completion:;
@end
