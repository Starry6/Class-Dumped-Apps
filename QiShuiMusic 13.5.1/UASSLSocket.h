@interface UASSLSocket : UABufferSocket
@property (nonatomic) ^{SSLContext=} sslContext;
@property (nonatomic) BOOL finishedHandshake;
@property (nonatomic) UABSDSocket bsdSocket;
@property (nonatomic) NSMutableData sslWritableData;
@property (nonatomic) NSMutableData sslReadableData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearAllBuffers;
- (void)socket:didConnectThroughIPType:;
- (id)sslReadableData;
- (id)sslWritableData;
- (BOOL)wifiwwanNetwork;
- (id)bsdSocket;
- (BOOL)finishedHandshake;
- (id)initWithHost:port:;
- (BOOL)isSSLContextValidate;
- (void)setBsdSocket:;
- (void)setFinishedHandshake:;
- (void)setSslContext:;
- (void)setSslReadableData:;
- (void)setSslWritableData:;
- (void)setWifiwwanNetwork:;
- (void)socket:didOccurError:;
- (void)socket:didReadData:;
- (void)socketDidWriteComplete:;
- (void)sslErrorWithStatus:mark:;
- (void)sslHandshakeThroughIPType:;
- (void)readData;
- (void)writeData:;
- (BOOL)useCellular;
- (void)dealloc;
- (void)socketDidClose:;
- (void)disconnect;
- (void).cxx_destruct;
- (void)connect;
- (id)sslContext;
- (void)setUseCellular:;
+ (void)clearBuffer:withLength:;
+ (void)clearBuffer:;
@end
