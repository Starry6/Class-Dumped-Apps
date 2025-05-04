@interface AWEScreenCastObserver : NSObject
@property (nonatomic) BOOL isAirPlayConnect;
@property (nonatomic) BOOL isAirPlayMirroring;
- (void)audioSessionDidChange:;
- (BOOL)isAirPlayMirroring;
- (void)uiscreenIsConnected:;
- (void)uiscreenIsDisconnected:;
- (void)updateAirPlayStatus;
- (void)setIsAirPlayConnect:;
- (void)setIsAirPlayMirroring:;
- (BOOL)isAirPlayConnect;
- (id)init;
- (void)dealloc;
@end
