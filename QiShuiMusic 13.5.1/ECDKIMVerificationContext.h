@interface ECDKIMVerificationContext : NSObject
@property (nonatomic) NSArray dkimSignatureHeaders;
@property (nonatomic) ECRawMessageHeaders headers;
@property (nonatomic) NSData bodyData;
@property (nonatomic) BOOL requireFullBodySignature;
- (id)bodyData;
- (void).cxx_destruct;
- (id)headers;
- (id)dkimSignatureHeaders;
- (id)initWithHeaders:bodyData:dkimSignatureHeaders:;
- (void)removeDKIMSignatureHeaders:;
- (void)setDkimSignatureHeaders:;
- (BOOL)requireFullBodySignature;
- (void)setRequireFullBodySignature:;
@end
