@interface PLZeroKeywordStore : NSObject
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)deleteStore;
- (id)currentZeroKeywords;
- (id)currentZeroKeywordsForLibraryScope:;
- (void)updateZeroKeywordsTo:;
+ (id)expectedClasses;
@end
