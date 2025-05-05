@interface SFSettings : PTSettings
@property (nonatomic) SFMagicHeadSettings magicHeadSettings;
- (void).cxx_destruct;
- (id)magicHeadSettings;
- (void)setMagicHeadSettings:;
+ (id)settingsControllerModule;
@end
