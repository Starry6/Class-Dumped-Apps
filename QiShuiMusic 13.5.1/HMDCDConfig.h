@interface HMDCDConfig : HMDModuleConfig
@property (nonatomic) Q minFreeDiskUsageMB;
@property (nonatomic) Q maxCDFileSizeMB;
@property (nonatomic) Q maxCDZipFileSizeMB;
@property (nonatomic) BOOL dumpNSException;
@property (nonatomic) BOOL dumpCPPException;
- (BOOL)dumpNSException;
- (unsigned long long)maxCDFileSizeMB;
- (BOOL)dumpCPPException;
- (id)getModule;
- (unsigned long long)maxCDZipFileSizeMB;
- (unsigned long long)minFreeDiskUsageMB;
- (void)setDumpCPPException:;
- (void)setDumpNSException:;
- (void)setMaxCDFileSizeMB:;
- (void)setMaxCDZipFileSizeMB:;
- (void)setMinFreeDiskUsageMB:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
