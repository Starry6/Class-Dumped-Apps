@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage
@property (nonatomic) NSData data;
- (id)data;
- (unsigned char)command;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
@end
