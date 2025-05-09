@interface HMDGeneralAPISettings : NSObject
@property (nonatomic) HMDConfigFetchSetting fetchAPISetting;
@property (nonatomic) HMDPerformanceUploadSetting performanceAPISetting;
@property (nonatomic) HMDCommonAPISetting crashUploadSetting;
@property (nonatomic) HMDCommonAPISetting exceptionUploadSetting;
@property (nonatomic) HMDCommonAPISetting fileUploadSetting;
@property (nonatomic) HMDCommonAPISetting allAPISetting;
@property (nonatomic) HMDCloudCommandSetting cloudCommandSetting;
@property (nonatomic) HMDDoubleUploadSettings doubleUploadSetting;
@property (nonatomic) HMDHermasUploadSetting hermasUploadSetting;
- (id)fetchAPISetting;
- (id)allAPISetting;
- (id)cloudCommandSetting;
- (id)crashUploadSetting;
- (id)doubleUploadSetting;
- (id)exceptionUploadSetting;
- (id)fileUploadSetting;
- (id)hermasUploadSetting;
- (id)performanceAPISetting;
- (void)setAllAPISetting:;
- (void)setCloudCommandSetting:;
- (void)setCrashUploadSetting:;
- (void)setDoubleUploadSetting:;
- (void)setExceptionUploadSetting:;
- (void)setFetchAPISetting:;
- (void)setFileUploadSetting:;
- (void)setHermasUploadSetting:;
- (void)setPerformanceAPISetting:;
- (void).cxx_destruct;
+ (id)hmd_attributeMapDictionary;
@end
