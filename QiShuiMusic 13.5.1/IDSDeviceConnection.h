@interface IDSDeviceConnection : NSObject
@property (nonatomic) _IDSDeviceConnection _internal;
@property (nonatomic) NSInteger socket;
@property (nonatomic) Q mtu;
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSOutputStream outputStream;
@property (nonatomic) NSDictionary metrics;
- (unsigned long long)mtu;
- (id)_internal;
- (id)inputStream;
- (void)dealloc;
- (id)metrics;
- (void)close;
- (int)socket;
- (void).cxx_destruct;
- (id)outputStream;
- (id)description;
- (id)initSocketWithDevice:options:completionHandler:queue:;
- (void)setStreamPairWithInputStream:outputStream:;
- (BOOL)updateConnectionWithOptions:error:;
- (id)initStreamWithDevice:options:completionHandler:queue:;
@end
