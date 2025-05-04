@interface AWEIMResendICloudStage : AWEIMStage
@property (nonatomic) AWEIMICloudAssetLoader loader;
- (void)p_iCloudSyncWithFileIDArray:message:content:conversation:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
- (id)loader;
- (void)setLoader:;
@end
