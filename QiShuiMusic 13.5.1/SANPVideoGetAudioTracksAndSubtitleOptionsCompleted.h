@interface SANPVideoGetAudioTracksAndSubtitleOptionsCompleted : SABaseCommand
@property (nonatomic) SANPVideoAudioAndSubtitleLanguageOptions languageOptions;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)languageOptions;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setLanguageOptions:;
+ (id)getAudioTracksAndSubtitleOptionsCompleted;
+ (id)getAudioTracksAndSubtitleOptionsCompletedWithDictionary:context:;
@end
