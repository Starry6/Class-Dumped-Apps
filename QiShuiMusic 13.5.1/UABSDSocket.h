@interface UABSDSocket : UABufferSocket
@property (nonatomic) NSInteger socketFd;
@property (nonatomic) NSString ipType;
- (void)bsdSocketOccursErrorWithMark:;
- (void)createSocketFd;
- (void)dnsResolution;
- (void)errorWithCode:mark:;
- (id)initWithHost:port:;
- (id)ipType;
- (BOOL)isSocketFdValidate;
- (int)socketFd;
- (void)readData;
- (void)writeData:;
- (void)dealloc;
- (void)disconnect;
- (void).cxx_destruct;
- (void)connect;
+ (id)cellularIPTypeSet;
@end
