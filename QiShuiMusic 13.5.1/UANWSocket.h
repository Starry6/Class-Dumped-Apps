@interface UANWSocket : UASocket
@property (nonatomic) NSObject<OS_nw_connection> connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL useTLS;
- (void)certVerifyWithOptions:;
- (id)initWithHost:port:;
- (void)socketOccursError:;
- (void)readData;
- (void)writeData:;
- (void)dealloc;
- (void)disconnect;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)connect;
- (void)setQueue:;
- (id)queue;
- (BOOL)useTLS;
- (void)setUseTLS:;
@end
