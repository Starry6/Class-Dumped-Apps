@interface CPSearchMatcher : NSObject
- (void)dealloc;
- (id)initWithSearchString:;
- (BOOL)matches:;
- (BOOL)matchesASCIIString:matchType:;
- (BOOL)matchesUTF8String:;
- (BOOL)matchesUTF8String:matchType:matchOptions:;
- (BOOL)matchesUTF8String:matchType:;
- (BOOL)matches:matchType:;
- (id)initWithSearchString:andLocale:andOptions:;
- (id)initWithSearchString:andLocale:;
- (id)initWithSearchString:options:;
@end
