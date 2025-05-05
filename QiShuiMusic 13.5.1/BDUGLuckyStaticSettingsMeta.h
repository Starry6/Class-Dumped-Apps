@interface BDUGLuckyStaticSettingsMeta : BDUGLuckyBDModel
@property (nonatomic) double pollingInterval;
@property (nonatomic) q version;
- (void)setVersion:;
- (long long)version;
- (double)pollingInterval;
- (void)setPollingInterval:;
+ (id)modelCustomPropertyMapper;
@end
