@interface AWEPaySwiftImpl.SecurityLockServerExtra : MTLModel
@property (nonatomic) q serverRecvTimestamp;
@property (nonatomic) q serverRespTimestamp;
@property (nonatomic) NSString logID;
- (long long)serverRecvTimestamp;
- (void)setServerRecvTimestamp:;
- (long long)serverRespTimestamp;
- (void)setServerRespTimestamp:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)logID;
- (void)setLogID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
