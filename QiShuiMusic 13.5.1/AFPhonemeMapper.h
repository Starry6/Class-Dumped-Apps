@interface AFPhonemeMapper : NSObject
- (void).cxx_destruct;
- (id)initWithLanguageCode:;
- (id)stringByReplacingPhonemesInString:;
+ (id)_mapForLanguageCode:;
+ (id)_buildRegexMatchingSubstrings:;
@end
