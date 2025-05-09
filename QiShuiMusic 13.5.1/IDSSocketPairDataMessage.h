@interface IDSSocketPairDataMessage : IDSSocketPairMessage
@property (nonatomic) I sequenceNumber;
@property (nonatomic) S streamID;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL compressed;
@property (nonatomic) BOOL didWakeHint;
@property (nonatomic) NSString peerResponseIdentifier;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSDate expiryDate;
- (id)messageUUID;
- (id)data;
- (id)expiryDate;
- (void)setSequenceNumber:;
- (unsigned char)command;
- (unsigned int)sequenceNumber;
- (void).cxx_destruct;
- (void)setExpiryDate:;
- (void)setCompressed:;
- (unsigned short)streamID;
- (BOOL)compressed;
- (void)setStreamID:;
- (BOOL)expectsPeerResponse;
- (id)peerResponseIdentifier;
- (BOOL)wantsAppAck;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
- (BOOL)didWakeHint;
- (id)initWithSequenceNumber:streamID:expectsPeerResponse:wantsAppAck:compressed:didWakeHint:peerResponseIdentifier:messageUUID:data:expiryDate:;
- (void)setDidWakeHint:;
@end
