@interface VCSParsedLine : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q tokenID;
@property (nonatomic) BOOL usePalmD4Hooks;
- (id)content;
- (id)init;
- (void)setType:;
- (long long)tokenID;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (id)params;
- (id)keyword;
- (void)setTokenID:;
- (id)loadFromCString:withParseState:;
- (void)setKeywordFromCString:;
- (void)setContentFromCString:;
- (id)convertedContent;
- (BOOL)usePalmD4Hooks;
- (void)setUsePalmD4Hooks:;
+ (long long)tokenizeKeyword:withType:;
+ (long long)tokenizeNSStringKeyword:withType:;
+ (id)lookupProperty:;
@end
