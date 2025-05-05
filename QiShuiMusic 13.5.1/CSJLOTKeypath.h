@interface CSJLOTKeypath : NSObject
@property (nonatomic) NSString absoluteKeypath;
@property (nonatomic) NSString currentKey;
@property (nonatomic) NSString currentKeyPath;
@property (nonatomic) NSDictionary searchResults;
@property (nonatomic) BOOL hasFuzzyWildcard;
@property (nonatomic) BOOL hasWildcard;
@property (nonatomic) BOOL endOfKeypath;
- (id)absoluteKeypath;
- (void)addSearchResultForCurrentPath:;
- (BOOL)endOfKeypath;
- (BOOL)hasFuzzyWildcard;
- (BOOL)hasWildcard;
- (void)popKey;
- (void)popToRootKey;
- (BOOL)pushKey:;
- (id)initWithKeys:;
- (id)currentKey;
- (id)searchResults;
- (void).cxx_destruct;
- (id)currentKeyPath;
+ (id)keypathWithKeys:;
+ (id)keypathWithString:;
@end
