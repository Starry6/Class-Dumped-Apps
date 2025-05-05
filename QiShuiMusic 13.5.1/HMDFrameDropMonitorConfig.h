@interface HMDFrameDropMonitorConfig : HMDMonitorConfig
@property (nonatomic) BOOL enableUploadStaticRecord;
- (BOOL)enableUploadStaticRecord;
- (id)getModule;
- (void)setEnableUploadStaticRecord:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
