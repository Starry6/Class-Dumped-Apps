@interface SANPVideoAudioAndSubtitleLanguageOptions : AceObject
@property (nonatomic) NSArray availableSubtitles;
@property (nonatomic) NSArray availableTracks;
@property (nonatomic) SANPVideoLanguageOption currentAudioTrack;
@property (nonatomic) SANPVideoLanguageOption currentSubtitles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentAudioTrack;
- (id)groupIdentifier;
- (void)setCurrentAudioTrack:;
- (id)encodedClassName;
- (void)setCurrentSubtitles:;
- (void)setAvailableSubtitles:;
- (void)setAvailableTracks:;
- (id)availableSubtitles;
- (id)availableTracks;
- (id)currentSubtitles;
+ (id)audioAndSubtitleLanguageOptions;
+ (id)audioAndSubtitleLanguageOptionsWithDictionary:context:;
@end
