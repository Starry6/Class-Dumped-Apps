@interface TTDnsQuery : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSInteger sdkId;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSDictionary controlHeaders;
@property (nonatomic) TTDnsResult result;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (void)doQuery;
- (id)controlHeaders;
- (id)initWithHost:sdkId:controlHeaders:;
- (int)sdkId;
- (void)setControlHeaders:;
- (void)setSdkId:;
- (id)result;
- (id)host;
- (id)uuid;
- (void)setHost:;
- (void)setSemaphore:;
- (void)setUuid:;
- (void)resume;
- (void).cxx_destruct;
- (id)semaphore;
- (void)setResult:;
- (void)await;
@end
