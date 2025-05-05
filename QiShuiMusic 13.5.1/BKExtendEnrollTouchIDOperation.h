@interface BKExtendEnrollTouchIDOperation : BKOperation
@property (nonatomic) <BKExtendEnrollTouchIDOperationDelegate> delegate;
@property (nonatomic) BKIdentity identity;
@property (nonatomic) NSData credentialSet;
- (void)setIdentity:;
- (id)identity;
- (void)startBioOperation:reply:;
- (void)homeButtonPressed:;
- (void).cxx_destruct;
- (void)statusMessage:client:;
- (void)matchResult:details:client:;
- (void)setCredentialSet:;
- (id)credentialSet;
@end
