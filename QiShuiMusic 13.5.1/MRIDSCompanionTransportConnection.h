@interface MRIDSCompanionTransportConnection : MRExternalDeviceTransportConnection
@property (nonatomic) NSString type;
@property (nonatomic) NSString destination;
@property (nonatomic) NSString session;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeWithError:;
- (void)dealloc;
- (id)destination;
- (id)error;
- (id)type;
- (BOOL)isValid;
- (id)session;
- (void).cxx_destruct;
- (void)setRunLoop:;
- (id)runLoop;
- (unsigned long long)sendTransportData:options:;
- (id)initWithConnection:type:destination:session:;
- (void)ingestData:;
- (id)exportEndpoint:;
- (id)exportOutputDevice:endpoint:;
- (long long)_idsPriorityFromPriority:;
- (id)_exportDescriptorForOutputDevice:endpoint:remoteControl:;
@end
