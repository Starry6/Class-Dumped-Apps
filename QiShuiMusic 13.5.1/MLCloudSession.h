@interface MLCloudSession : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) CKContainer container;
@property (nonatomic) NSString teamIdentifier;
- (void)setContainer:;
- (id)teamIdentifier;
- (id)container;
- (void)setServiceName:;
- (id)serviceName;
- (void).cxx_destruct;
- (id)initWithTeamIdentifier:;
- (id)fetchKeyResponseFromServerForKeyID:signedKeyRequest:error:;
@end
