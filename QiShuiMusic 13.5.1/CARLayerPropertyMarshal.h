@interface CARLayerPropertyMarshal : NSObject
@property (nonatomic) NSXPCConnection connection;
- (void)_setupConnection;
- (id)init;
- (void)_handleConnectionReset;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)invalidate;
- (void)sendLayerProperties:;
@end
