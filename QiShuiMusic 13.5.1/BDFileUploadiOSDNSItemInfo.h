@interface BDFileUploadiOSDNSItemInfo : NSObject
@property (nonatomic) q usingIndex;
@property (nonatomic) double createTime;
@property (nonatomic) double expiredTime;
@property (nonatomic) NSString host;
@property (nonatomic) NSArray ips;
@property (nonatomic) q parserType;
@property (nonatomic) q ttl;
@property (nonatomic) BOOL hasExpired;
- (void)setIps:;
- (id)ips;
- (void)setExpiredTime:;
- (double)expiredTime;
- (id)getIpUsingRR;
- (void)setUsingIndex:;
- (long long)usingIndex;
- (BOOL)hasExpired;
- (id)init;
- (id)host;
- (void)setHost:;
- (double)createTime;
- (void).cxx_destruct;
- (void)setCreateTime:;
- (void)setTtl:;
- (long long)ttl;
- (long long)parserType;
- (void)setParserType:;
@end
