@interface SANPVideoSetAudioTrack : SABaseClientBoundCommand
@property (nonatomic) NSString desiredOptionId;
@property (nonatomic) NSString languageOptionChangeUserSetting;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)desiredOptionId;
- (void)setDesiredOptionId:;
- (id)languageOptionChangeUserSetting;
- (void)setLanguageOptionChangeUserSetting:;
+ (id)setAudioTrack;
+ (id)setAudioTrackWithDictionary:context:;
@end
