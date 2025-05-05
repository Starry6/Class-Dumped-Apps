@interface WBSReaderFontManager : NSObject
@property (nonatomic) NSArray fonts;
@property (nonatomic) NSArray possibleFonts;
@property (nonatomic) NSString languageTag;
- (id)fonts;
- (id)languageTag;
- (id)init;
- (id)fontWithFontFamilyName:;
- (void).cxx_destruct;
- (id)defaultFontForLanguageTag:;
- (id)possibleFonts;
- (void)updateLanguageTag:;
- (void)_fontDownloadDidFinish:;
@end
