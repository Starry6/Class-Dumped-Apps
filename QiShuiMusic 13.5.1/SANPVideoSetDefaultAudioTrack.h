@interface SANPVideoSetDefaultAudioTrack : SABaseClientBoundCommand
@property (nonatomic) NSString languageOptionChangeUserSetting;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)languageOptionChangeUserSetting;
- (void)setLanguageOptionChangeUserSetting:;
+ (id)setDefaultAudioTrack;
+ (id)setDefaultAudioTrackWithDictionary:context:;
@end
