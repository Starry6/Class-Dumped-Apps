@interface BKEnrollOperation : BKOperation
@property (nonatomic) <BKEnrollOperationDelegate> delegate;
@property (nonatomic) I userID;
@property (nonatomic) NSData credentialSet;
- (unsigned int)userID;
- (void)enrollFeedback:client:;
- (void)startBioOperation:reply:;
- (void)enrollUpdate:client:;
- (id)optionsDictionaryWithError:;
- (void)statusMessage:details:client:;
- (void).cxx_destruct;
- (void)statusMessage:client:;
- (id)initWithDevice:;
- (void)setUserID:;
- (void)enrollResult:details:client:;
- (void)setCredentialSet:;
- (void)operationInterrupted;
- (id)enrollResultInfoWithServerIdentity:details:;
- (void)processEnrollFailReason:;
- (id)credentialSet;
@end
