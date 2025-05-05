@interface OSLogEventLiveStream : OSLogEventStreamBase
@property (nonatomic) NSObject<OS_xpc_object> diagdconn;
@property (nonatomic) @? dropnoteHandler;
@property (nonatomic) OSLogEventLiveSource source;
- (void)setDiagdconn:;
- (void)setDropnoteHandler:;
- (void)setDroppedEventHandler:;
- (id)initWithLiveSource:;
- (void)_activateLiveStream;
- (void).cxx_destruct;
- (id)source;
- (void)_handleStreamedObject:usingProxy:;
- (id)diagdconn;
- (void)setFilterPredicate:;
- (void)invalidate;
- (void)activate;
- (id)dropnoteHandler;
@end
