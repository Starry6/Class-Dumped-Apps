@interface LSRecordBuilder : NSObject
- (void)setDatabase:;
- (void).cxx_destruct;
- (void)parseiTunesMetadata:;
- (unsigned int)registerBundleRecord:error:;
- (BOOL)parseInfoPlist:;
- (BOOL)parseInstallationInfo:;
+ (id)recordBuilderForType:;
@end
