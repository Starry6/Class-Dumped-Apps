@interface SANPVideoTurnOffSubtitles : SABaseClientBoundCommand
@property (nonatomic) NSString languageOptionChangeUserSetting;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)languageOptionChangeUserSetting;
- (void)setLanguageOptionChangeUserSetting:;
+ (id)turnOffSubtitles;
+ (id)turnOffSubtitlesWithDictionary:context:;
@end
