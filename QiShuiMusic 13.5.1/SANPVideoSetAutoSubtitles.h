@interface SANPVideoSetAutoSubtitles : SABaseClientBoundCommand
@property (nonatomic) NSString languageOptionChangeUserSetting;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)languageOptionChangeUserSetting;
- (void)setLanguageOptionChangeUserSetting:;
+ (id)setAutoSubtitles;
+ (id)setAutoSubtitlesWithDictionary:context:;
@end
