@interface AVMDLiOSDNSParserBridgeV2 : NSObject
@property (nonatomic) NSMutableArray parserActions;
@property (nonatomic) NSString hostname;
@property (nonatomic) ^{VCNDNSParserInterface=^^?i} implement;
@property (nonatomic) q startT;
@property (nonatomic) NSLock lock;
- (id)getIpList:;
- (id)implement;
- (id)parserActions;
- (void)setImplement:;
- (void)setParserActions:;
- (void)setStartT:;
- (int)startParse:implement:dnsType:;
- (long long)startT;
- (int)switchTypeToInternal:;
- (void)triggerRefreshDNSInfo:implement:dnsType:;
- (id)hostname;
- (id)init;
- (void)dealloc;
- (void)setHostname:;
- (void)close;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
@end
