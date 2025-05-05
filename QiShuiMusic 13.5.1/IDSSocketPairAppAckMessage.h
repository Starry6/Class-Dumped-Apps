@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage
@property (nonatomic) I sequenceNumber;
@property (nonatomic) S streamID;
@property (nonatomic) NSString peerResponseIdentifier;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic) BOOL didWakeHint;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSDate expiryDate;
- (void)setSequenceNumber:;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (void).cxx_destruct;
- (unsigned short)streamID;
- (void)setStreamID:;
- (id)peerResponseIdentifier;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:streamID:peerResponseIdentifier:;
@end
