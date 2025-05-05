@interface LPURLSuffixChecker : NSObject
- (void)dealloc;
- (void)addStringToFailedSuffixes:;
- (void).cxx_destruct;
- (BOOL)hasSuffix:;
- (id)initWithSuffixes:;
- (BOOL)insertString:intoTrieWithCache:;
- (BOOL)hasSuffix:remainingPrefix:;
@end
