@interface EMFEmojiPreferencesClient : EMFEmojiPreferences
@property (nonatomic) NSString machName;
@property (nonatomic) BOOL isValid;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)setIsValid:;
- (void)_disconnect;
- (id)machName;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)setMachName:;
- (void)didViewEmojiIndex:forCategory:;
- (void)didUseEmoji:usageMode:typingName:;
- (void)didUseEmoji:usageMode:;
- (id)_initWithoutConnection;
- (void)writeEmojiDefaults;
- (void)didDisplaySkinToneHelp;
- (id)initWithMachName:;
- (void)didUseEmoji:;
- (void)writeEmojiDefaultsAndNotify:;
+ (id)serviceInterface;
+ (id)differentialPrivacyRecorderForEmoji:usageMode:;
@end
