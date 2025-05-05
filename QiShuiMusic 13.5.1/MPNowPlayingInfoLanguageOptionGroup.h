@interface MPNowPlayingInfoLanguageOptionGroup : NSObject
@property (nonatomic) ^v mrLanguageOptionGroup;
@property (nonatomic) NSArray languageOptions;
@property (nonatomic) MPNowPlayingInfoLanguageOption defaultLanguageOption;
@property (nonatomic) BOOL allowEmptySelection;
- (id)languageOptions;
- (void)dealloc;
- (BOOL)allowEmptySelection;
- (id)defaultLanguageOption;
- (id)initWithLanguageOptions:defaultLanguageOption:allowEmptySelection:;
- (id)initWithMRLanguageOptionGroup:;
- (id)mrLanguageOptionGroup;
@end
