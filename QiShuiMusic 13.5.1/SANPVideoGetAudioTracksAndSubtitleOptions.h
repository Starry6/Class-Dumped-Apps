@interface SANPVideoGetAudioTracksAndSubtitleOptions : SABaseClientBoundCommand
@property (nonatomic) NSString desiredLanguage;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)desiredLanguage;
- (void)setDesiredLanguage:;
+ (id)getAudioTracksAndSubtitleOptions;
+ (id)getAudioTracksAndSubtitleOptionsWithDictionary:context:;
@end
