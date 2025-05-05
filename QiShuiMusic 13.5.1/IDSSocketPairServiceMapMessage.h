@interface IDSSocketPairServiceMapMessage : IDSSocketPairMessage
@property (nonatomic) C reason;
@property (nonatomic) S mappedStreamID;
@property (nonatomic) NSString serviceName;
- (id)serviceName;
- (unsigned char)reason;
- (unsigned char)command;
- (void).cxx_destruct;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
- (id)initWithReason:mappedStreamID:serviceName:;
- (unsigned short)mappedStreamID;
@end
