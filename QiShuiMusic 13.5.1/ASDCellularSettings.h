@interface ASDCellularSettings : NSObject
@property (nonatomic) BOOL allowAutomaticDownloads;
@property (nonatomic) q cellularDataPrompt;
- (void).cxx_destruct;
- (id)initWithDefaultsKey:;
- (BOOL)allowAutomaticDownloads;
- (void)setAllowAutomaticDownloads:;
- (long long)cellularDataPrompt;
- (void)setCellularDataPrompt:;
+ (id)settingsForIdentity:;
@end
