@interface WebAVMediaSelectionOption : NSObject
@property (nonatomic) NSString localizedDisplayName;
@property (nonatomic) NSString mediaType;
- (id)propertyList;
- (id)mediaType;
- (id)metadataForFormat:;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (id)languageCode;
- (BOOL)isPlayable;
- (id)availableMetadataFormats;
- (id)locale;
- (id)localizedDisplayName;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)hasMediaCharacteristic:;
- (id)mediaCharacteristics;
- (id)track;
- (id)mediaSubTypes;
- (BOOL)_isDesignatedDefault;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:;
- (id)displayNameWithLocale:;
- (id)outOfBandSource;
- (id)outOfBandIdentifier;
- (id)initWithMediaType:displayName:;
@end
