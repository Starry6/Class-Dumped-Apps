@interface AWEIMNewerHalfScreenMuteSettingsCellViewModel : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL shouldHideLeftMinus;
@property (nonatomic) BOOL enableSwitch;
@property (nonatomic) BOOL shouldHideLineView;
@property (nonatomic) q settingsType;
- (BOOL)enableSwitch;
- (void)setEnableSwitch:;
- (BOOL)shouldHideLineView;
- (void)setShouldHideLineView:;
- (BOOL)shouldHideLeftMinus;
- (void)setShouldHideLeftMinus:;
- (void)setSettingsType:;
- (id)subtitle;
- (long long)settingsType;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
@end
