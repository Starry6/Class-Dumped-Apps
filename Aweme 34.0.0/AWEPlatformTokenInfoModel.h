@interface AWEPlatformTokenInfoModel : AWEBaseApiModel
@property (nonatomic) double lastUploadTime;
@property (nonatomic) Q platform;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSError error;
- (void)setLastUploadTime:;
- (double)lastUploadTime;
- (void)setInfo:;
- (id)info;
- (void)setError:;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (id)error;
- (void)setPlatform:;
@end
