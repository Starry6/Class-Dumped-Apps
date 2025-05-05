@interface EAccountNetworkSocket : NSObject
@property (nonatomic) NSObject<OS_nw_parameters> params;
@property (nonatomic) NSObject<OS_nw_connection> connection;
@property (nonatomic) @? receiveMessage;
@property (nonatomic) NSString message;
@property (nonatomic) <EAccountNetworkSocketDelegate> delegate;
- (void)closeNetworkSocketConnect;
- (void)connectNetworkSocketToHost:port:queue:;
- (id)dispatchDataFromNsdata:;
- (id)nsdataFromDispatchData:;
- (id)receiveMessage;
- (void)receiveMsg;
- (void)sendSMessage:;
- (void)setReceiveMessage:;
- (void)dealloc;
- (void)setMessage:;
- (void)setDelegate:;
- (id)delegate;
- (id)message;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithDelegate:;
- (id)params;
- (void)setParams:;
@end
