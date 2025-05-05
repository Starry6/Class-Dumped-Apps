@interface IDSSocketPairAckMessage : IDSSocketPairMessage
@property (nonatomic) I sequenceNumber;
@property (nonatomic) S streamID;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic) BOOL didWakeHint;
@property (nonatomic) NSString peerResponseIdentifier;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSDate expiryDate;
- (void)setSequenceNumber:;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (id)initWithSequenceNumber:;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
@end
