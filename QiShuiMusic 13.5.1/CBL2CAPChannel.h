@interface CBL2CAPChannel : NSObject
@property (nonatomic) CBUUID serviceUUID;
@property (nonatomic) BOOL isIncoming;
@property (nonatomic) NSInteger socketFD;
@property (nonatomic) CBPeer peer;
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSOutputStream outputStream;
@property (nonatomic) S PSM;
- (id)serviceUUID;
- (id)inputStream;
- (BOOL)isIncoming;
- (id)peer;
- (void)dealloc;
- (void)setIsIncoming:;
- (void).cxx_destruct;
- (id)outputStream;
- (void)setServiceUUID:;
- (id)description;
- (unsigned short)PSM;
- (int)socketFD;
- (id)initWithPeer:info:;
@end
