@interface NSConcreteScanner : NSScanner
- (id)string;
- (void)setLocale:;
- (void)dealloc;
- (id)initWithString:;
- (void)setScanLocation:;
- (id)_invertedSkipSet;
- (BOOL)scanInt:;
- (id)locale;
- (BOOL)caseSensitive;
- (id)charactersToBeSkipped;
- (unsigned long long)scanLocation;
- (BOOL)scanLongLong:;
- (void)setCaseSensitive:;
- (void)setCharactersToBeSkipped:;
@end
