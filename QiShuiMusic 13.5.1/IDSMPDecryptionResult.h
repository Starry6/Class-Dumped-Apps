@interface IDSMPDecryptionResult : NSObject
@property (nonatomic) NSData decryptedData;
@property (nonatomic) NSDictionary encryptedAttributes;
@property (nonatomic) @? commitBlock;
- (void).cxx_destruct;
- (id)initWithData:encryptedAttributes:withCommitState:;
- (id)decryptedData;
- (void)setDecryptedData:;
- (id)encryptedAttributes;
- (void)setEncryptedAttributes:;
- (id)commitBlock;
- (void)setCommitBlock:;
@end
