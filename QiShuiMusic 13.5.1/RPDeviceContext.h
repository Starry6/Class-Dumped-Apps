@interface RPDeviceContext : NSObject
@property (nonatomic) RPDevice device;
@property (nonatomic) RPLegacyDeviceDiscovery discovery;
@property (nonatomic) BOOL reported;
@property (nonatomic) RPLegacySession session;
@property (nonatomic) NSInteger state;
- (void)setSession:;
- (void)setState:;
- (void)setDevice:;
- (void)setDiscovery:;
- (int)state;
- (id)session;
- (void).cxx_destruct;
- (void)invalidate;
- (id)device;
- (id)discovery;
- (BOOL)reported;
- (void)pairVerify;
- (void)systemInfoResponse:error:;
- (void)setReported:;
@end
