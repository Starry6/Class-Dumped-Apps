@interface MPNowPlayingInfoLanguageOption : NSObject
@property (nonatomic) ^v mrLanguageOption;
@property (nonatomic) Q languageOptionType;
@property (nonatomic) NSString languageTag;
@property (nonatomic) NSArray languageOptionCharacteristics;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString identifier;
- (id)languageTag;
- (void)dealloc;
- (id)identifier;
- (id)displayName;
- (id)initWithType:languageTag:characteristics:displayName:identifier:;
- (id)initWithMRLanguageOption:;
- (BOOL)isAutomaticLegibleLanguageOption;
- (BOOL)isAutomaticAudibleLanguageOption;
- (unsigned long long)languageOptionType;
- (id)languageOptionCharacteristics;
- (id)copyExternalRepresentation;
- (BOOL)isEqualToLanguageOption:;
- (id)mrLanguageOption;
@end
