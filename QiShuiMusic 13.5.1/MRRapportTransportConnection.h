@interface MRRapportTransportConnection : MRExternalDeviceTransportConnection
@property (nonatomic) NSString sessionUID;
@property (nonatomic) NSString eventID;
@property (nonatomic) RPCompanionLinkClient connection;
- (void)closeWithError:;
- (id)eventID;
- (BOOL)isValid;
- (id)connection;
- (void).cxx_destruct;
- (void)setRunLoop:;
- (void)setConnection:;
- (id)runLoop;
- (id)sessionUID;
- (unsigned long long)sendTransportData:options:;
- (id)initWithCompanionLinkClient:device:sessionUID:;
- (id)initWithDeviceUID:sessionUID:targetDevice:error:;
- (BOOL)_targetDeviceMatch:deviceUID:;
- (void)_registerCallbacks;
@end
