@interface NWUDPListener : NSObject
@property (nonatomic) NSObject<OS_nw_listener> internalListener;
@property (nonatomic) NWParameters parameters;
@property (nonatomic) NWEndpoint endpoint;
@property (nonatomic) <NWUDPListenerDelegate> delegate;
@property (nonatomic) NSError error;
@property (nonatomic) NWEndpoint localEndpoint;
- (void)handleError:;
- (void)setError:;
- (void)setDelegate:;
- (void)setEndpoint:;
- (id)error;
- (id)initWithParameters:delegate:;
- (id)parameters;
- (id)delegate;
- (void).cxx_destruct;
- (id)internalListener;
- (id)endpoint;
- (void)setInternalListener:;
- (void)setParameters:;
- (id)localEndpoint;
- (void)setLocalEndpoint:;
- (void)handleConnection:;
@end
