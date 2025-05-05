@interface MRStreamTransportConnection : MRExternalDeviceTransportConnection
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)close;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setRunLoop:;
- (void)stream:handleEvent:;
- (id)runLoop;
- (id)initWithInputStream:outputStream:;
- (unsigned long long)sendTransportData:options:;
- (void)_stream:handleEvent:;
- (void)_openStream:;
- (void)_closeStream:;
- (void)_closeAllStreams;
- (void)_setQOSPropertiesOnStream:;
@end
