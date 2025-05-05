@interface VEAlgorithmConfig : NSObject
@property (nonatomic) NSString configPath;
@property (nonatomic) ^? resourceFinder;
@property (nonatomic) NSString tempRecPath;
@property (nonatomic) q serviceCount;
@property (nonatomic) q superParams;
@property (nonatomic) Q initType;
- (void)setSuperParams:;
- (void)setTempRecPath:;
- (unsigned long long)initType;
- (id)resourceFinder;
- (void)setInitType:;
- (void)setResourceFinder:;
- (long long)superParams;
- (id)tempRecPath;
- (void).cxx_destruct;
- (id)configPath;
- (void)setConfigPath:;
- (void)setServiceCount:;
- (long long)serviceCount;
@end
