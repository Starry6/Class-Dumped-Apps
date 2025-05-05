@interface AWEPlatformTokenInfoModel : IESIMBaseApiModel
@property (nonatomic) double lastUploadTime;
@property (nonatomic) Q platform;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSError error;
- (double)lastUploadTime;
- (void)setLastUploadTime:;
- (void)setPlatform:;
- (void)setError:;
- (void)setInfo:;
- (id)error;
- (unsigned long long)platform;
- (void).cxx_destruct;
- (id)info;
@end
