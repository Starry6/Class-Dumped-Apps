@interface TVLNodeOptimizeInfo : NSObject
@property (nonatomic) NSDictionary optimizeInfo;
@property (nonatomic) NSDictionary configInfo;
@property (nonatomic) NSArray IPs;
- (id)IPs;
- (id)logInfoWithIP:;
- (id)optimizeInfo;
- (void)setOptimizeInfo:;
- (void).cxx_destruct;
- (id)configInfo;
- (void)setConfigInfo:;
+ (id)nodeOptimizeInfoWithOptimizeInfo:configInfo:;
@end
