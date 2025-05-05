@interface VSTextPreProcessor : NSObject
- (void)dealloc;
- (id)initWithContentsOfPath:languageIdentifier:;
- (id)processedTextFromString:;
@end
