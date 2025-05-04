@interface AWELiveFrontierConnectMonitor : NSObject
@property (nonatomic) q connectTimeMs;
@property (nonatomic) q disconnectTimeMs;
@property (nonatomic) <IESLCConnectManagerProtocol> connectManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ieslc_onConnectionStateChanged:connectionState:url:;
- (void)setConnectTimeMs:;
- (void)setDisconnectTimeMs:;
- (long long)connectTimeMs;
- (long long)disconnectTimeMs;
@end
