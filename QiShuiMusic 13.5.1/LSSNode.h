@interface LSSNode : NSObject
@property (nonatomic) LSSDomain domain;
@property (nonatomic) NSDictionary configInfo;
@property (nonatomic) NSString host;
@property (nonatomic) NSArray IPs;
@property (nonatomic) NSDictionary nodeInfo;
@property (nonatomic) LSSDomain lssDomain;
- (id)IPs;
- (void)setIPs:;
- (id)lssDomain;
- (id)nodeInfo;
- (void)setNodeInfo:;
- (id)host;
- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (void)setDomain:;
- (id)configInfo;
- (void)setConfigInfo:;
+ (id)nodeWithDomain:configInfo:;
@end
