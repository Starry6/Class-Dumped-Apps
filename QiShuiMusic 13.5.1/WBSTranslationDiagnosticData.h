@interface WBSTranslationDiagnosticData : NSObject
@property (nonatomic) NSString extractedParagraphsAsJSON;
@property (nonatomic) NSString translatedParagraphsAsJSON;
@property (nonatomic) NSString errorsAsJSON;
@property (nonatomic) NSString URLString;
@property (nonatomic) NSArray extractedParagraphs;
@property (nonatomic) NSArray translatedParagraphs;
@property (nonatomic) NSArray errors;
- (id)init;
- (id)URLString;
- (void).cxx_destruct;
- (id)errors;
- (id)copyWithZone:;
- (void)setURLString:;
- (id)saveDiagnosticDataAsTemporaryFiles;
- (id)_destinationDirectory;
- (id)extractedParagraphs;
- (id)translatedParagraphs;
- (void)addExtractedParagraphs:;
- (void)addTranslatedParagraph:;
- (void)addError:forParagraphIdentifier:;
- (id)_createFileForContents:fileName:inDirectory:;
- (id)extractedParagraphsAsJSON;
- (void)setExtractedParagraphsAsJSON:;
- (id)translatedParagraphsAsJSON;
- (void)setTranslatedParagraphsAsJSON:;
- (id)errorsAsJSON;
- (void)setErrorsAsJSON:;
@end
