@interface HMDHermasUploadSetting : HMDCommonAPISetting
@property (nonatomic) Q limitUploadInterval;
@property (nonatomic) q limitUploadSize;
@property (nonatomic) q maxLogNumber;
@property (nonatomic) double maxFileSize;
@property (nonatomic) q maxUploadSize;
@property (nonatomic) q uploadInterval;
@property (nonatomic) BOOL enableRefactorOpen;
@property (nonatomic) q recordThreadShareMask;
- (long long)limitUploadSize;
- (BOOL)enableRefactorOpen;
- (unsigned long long)limitUploadInterval;
- (long long)maxLogNumber;
- (long long)maxUploadSize;
- (long long)recordThreadShareMask;
- (void)setEnableRefactorOpen:;
- (void)setLimitUploadInterval:;
- (void)setLimitUploadSize:;
- (void)setMaxLogNumber:;
- (void)setMaxUploadSize:;
- (void)setRecordThreadShareMask:;
- (void)setUploadInterval:;
- (long long)uploadInterval;
- (double)maxFileSize;
- (void)setMaxFileSize:;
+ (id)hmd_attributeMapDictionary;
@end
