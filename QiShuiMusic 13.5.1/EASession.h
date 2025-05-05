@interface EASession : NSObject
@property (nonatomic) EAAccessory accessory;
@property (nonatomic) NSString protocolString;
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSOutputStream outputStream;
- (id)inputStream;
- (id)accessory;
- (id)_shortDescription;
- (id)init;
- (void)dealloc;
- (id)outputStream;
- (id)description;
- (unsigned int)_sessionID;
- (id)initWithAccessory:forProtocol:;
- (id)protocolString;
- (void)_streamClosed;
- (void)_endStreams;
- (BOOL)isOpenCompleted;
- (void)setOpenCompleted:;
- (id)EASessionUUID;
- (void)_handleIncomingEAData:;
@end
