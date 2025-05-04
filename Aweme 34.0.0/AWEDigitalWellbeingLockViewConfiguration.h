@interface AWEDigitalWellbeingLockViewConfiguration : NSObject
@property (nonatomic) Q type;
@property (nonatomic) NSString title;
@property (nonatomic) NSString hint;
@property (nonatomic) BOOL appealOnly;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (nonatomic) BOOL shouldShowHelpAndSettingButton;
@property (nonatomic) NSString enterFrom;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)appealOnly;
- (void)setAppealOnly:;
- (BOOL)shouldShowHelpAndSettingButton;
- (void)setShouldShowHelpAndSettingButton:;
- (id)init;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)hint;
- (void)setHint:;
- (void)setShouldShowCloseButton:;
- (BOOL)shouldShowCloseButton;
@end
