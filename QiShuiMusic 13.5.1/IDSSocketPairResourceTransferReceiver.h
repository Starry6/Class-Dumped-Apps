@interface IDSSocketPairResourceTransferReceiver : NSObject
@property (nonatomic) Q totalBytesReceived;
@property (nonatomic) NSString messageUUID;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) I sequenceNumber;
@property (nonatomic) S streamID;
@property (nonatomic) NSData data;
@property (nonatomic) BOOL wantsAppAck;
@property (nonatomic) BOOL expectsPeerResponse;
@property (nonatomic) BOOL didWakeHint;
@property (nonatomic) NSString peerResponseIdentifier;
- (void)dealloc;
- (id)messageUUID;
- (id)expiryDate;
- (void).cxx_destruct;
- (void)setExpiryDate:;
- (id)initWithMessage:resumeResourceTransfers:receiverError:;
- (void)abortTransfer;
- (BOOL)writeResourceData:;
- (BOOL)writeResourceData:resourceByteOffset:;
- (BOOL)appendMessage:receiverError:;
- (id)finalizedMessageDictionaryIfDone;
- (unsigned long long)totalBytesReceived;
+ (id)incomingFilePathForMessageUUID:;
+ (id)incomingFilePath;
+ (id)modernIncomingFilePath;
@end
