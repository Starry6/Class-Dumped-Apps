@interface CHSpellChecker : NSObject
@property (nonatomic) CHSpellCheckerErrorModel errorModel;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isWordInUserDictionaries:caseSensitive:;
- (id)topCorrectionForString:contextBeforeToken:contextSeparator:shouldUseErrorModel:forLanguage:;
- (id)correctionsForString:shouldUseErrorModel:forLocale:;
- (id)errorModel;
- (void)setErrorModel:;
+ (id)newErrorModel;
+ (id)sharedSpellServer;
@end
