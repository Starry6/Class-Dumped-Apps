@interface AVAirMessageDispatcher : NSObject
@property (nonatomic) AVAirTransport channel;
@property (nonatomic) AVBonjourServiceClient bonjourServiceClient;
@property (nonatomic) <AVAirMessageDispatcherClientDelegate> delegate;
@property (nonatomic) NSNetService currentNetService;
@property (nonatomic) BOOL haveAirPlayService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setChannel:;
- (id)init;
- (id)channel;
- (void)setDelegate:;
- (void)sendMessage:completion:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)airTransport:didReceiveObject:;
- (void)airTransportInputDidClose:;
- (void)airTransportOutputDidOpen:;
- (void)didConnectToBonjourService:channel:;
- (BOOL)haveAirPlayService;
- (id)currentNetService;
- (void)setCurrentNetService:;
- (id)bonjourServiceClient;
+ (id)shared;
+ (BOOL)_isDispatcherEnabled;
@end
