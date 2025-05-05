@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage
@property (nonatomic) I fragmentedMessageID;
@property (nonatomic) I fragmentIndex;
@property (nonatomic) I totalFragmentCount;
@property (nonatomic) NSData data;
@property (nonatomic) I sequenceNumber;
@property (nonatomic) S streamID;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic) BOOL didWakeHint;
@property (nonatomic) NSString peerResponseIdentifier;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSDate expiryDate;
- (id)data;
- (unsigned char)command;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCommand:underlyingData:;
- (id)_nonHeaderData;
- (id)initWithData:withFragmentedMessageID:fragmentIndex:totalFragmentCount:;
- (unsigned int)fragmentedMessageID;
- (unsigned int)fragmentIndex;
- (unsigned int)totalFragmentCount;
+ (id)createOriginalMessageFromFragmentedMessages:;
+ (id)createMessageFragmentsFromOriginalMessage:withFragmentedMessageID:fragmentSize:;
@end
