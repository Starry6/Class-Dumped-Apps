@interface HMDCDGenerator : HeimdallrModule
@property (nonatomic) HMDCDUploader uploader;
- (BOOL)isSupportCoredump;
- (BOOL)needSyncStart;
- (void)setUploader:;
- (void)updateConfig:;
- (id)uploader;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
+ (id)sharedGenerator;
@end
