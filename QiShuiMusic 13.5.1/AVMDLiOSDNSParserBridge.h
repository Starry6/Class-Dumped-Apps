@interface AVMDLiOSDNSParserBridge : NSObject
@property (nonatomic) NSMutableArray parserActions;
@property (nonatomic) NSString hostname;
@property (nonatomic) ^{AVMDLDNSParserImplement=^^?i^^?{mutex={_opaque_pthread_mutex_t=q[56c]}}Bi^v**^{AVMDLNetWorkManager}{condition_variable={_opaque_pthread_cond_t=q[40c]}}q{mutex={_opaque_pthread_mutex_t=q[56c]}}{condition_variable={_opaque_pthread_cond_t=q[40c]}}i} implement;
@property (nonatomic) q startT;
@property (nonatomic) NSLock lock;
- (id)getIpList:;
- (id)implement;
- (id)parserActions;
- (void)setImplement:;
- (void)setParserActions:;
- (void)setStartT:;
- (int)startParse:implement:;
- (long long)startT;
- (int)switchTypeToInternal:;
- (id)hostname;
- (id)init;
- (void)dealloc;
- (void)setHostname:;
- (void)close;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
@end
