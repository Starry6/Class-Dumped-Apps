@interface TTDnsResult : NSObject
@property (nonatomic) NSInteger ret;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSInteger cacheSource;
@property (nonatomic) NSArray iplist;
@property (nonatomic) NSString detailedInfo;
- (void)setRet:;
- (int)ret;
- (void)setCacheSource:;
- (int)cacheSource;
- (id)detailedInfo;
- (id)initWithRet:source:cacheSource:ipList:detailedInfo:;
- (id)iplist;
- (void)setDetailedInfo:;
- (void)setIplist:;
- (void).cxx_destruct;
- (int)source;
- (void)setSource:;
@end
