@interface BDInstallGFConfig : NSObject
@property (nonatomic) NSInteger version;
@property (nonatomic) NSInteger delaySeconds;
@property (nonatomic) q refreshDtraitTime;
@property (nonatomic) NSDictionary fileds;
@property (nonatomic) NSDictionary dtraitFields;
- (id)commonFeaturePathByKey:;
- (id)configDC0Path;
- (id)configDO0Path;
- (id)configDO1Path;
- (int)dtraitConfigIndexWithName:;
- (id)dtraitConfigPathWithName:;
- (id)dtraitFields;
- (id)fileds;
- (long long)refreshDtraitTime;
- (void)setDtraitFields:;
- (void)setFileds:;
- (void)setRefreshDtraitTime:;
- (void)setVersion:;
- (int)version;
- (void).cxx_destruct;
- (int)delaySeconds;
- (void)setDelaySeconds:;
+ (id)arrayToConfigDictionary:;
+ (id)configWithEncryptString:;
@end
