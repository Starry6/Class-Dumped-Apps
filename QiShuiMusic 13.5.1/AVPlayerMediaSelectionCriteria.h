@interface AVPlayerMediaSelectionCriteria : NSObject
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSArray preferredMediaCharacteristics;
@property (nonatomic) NSArray principalMediaCharacteristics;
- (id)init;
- (void)dealloc;
- (id)preferredLanguages;
- (id)description;
- (id)initWithPreferredLanguages:preferredMediaCharacteristics:;
- (id)initWithPrincipalMediaCharacteristics:preferredLanguages:preferredMediaCharacteristics:;
- (id)initWithPreferredLanguages:preferredMediaCharacteristics:preferredMediaSubTypes:precludedMediaSubTypes:;
- (id)initWithPreferredLanguages:preferredMediaCharacteristics:preferredMediaSubTypes:precludedMediaSubTypes:preferMultichannelAudio:precludeMultichannelAudio:;
- (id)initWithPreferredLanguages:preferredMediaCharacteristics:fallbackPreferredLanguages:fallbackPreferredMediaCharacteristics:captionDisplayType:;
- (id)preferredMediaCharacteristics;
- (id)principalMediaCharacteristics;
- (id)preferredMediaSubTypes;
- (id)precludedMediaSubTypes;
- (BOOL)preferMultichannelAudio;
- (BOOL)precludeMultichannelAudio;
- (id)figDictionary;
- (id)initWithFigDictionary:;
@end
