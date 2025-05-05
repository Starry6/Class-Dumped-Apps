@interface CNAutocompleteProbeKeyBuilder : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSArray prefixes;
@property (nonatomic) NSArray suffixes;
- (id)init;
- (id)key;
- (id)build;
- (void)setKey:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)prediction;
- (id)prefixes;
- (void)setPrefixes:;
- (id)suffixes;
- (void)setSuffixes:;
- (void)useString:forSuffixAtIndex:;
- (id)addDuetReturnedResults:;
- (id)addBatchIndex:;
- (id)prefixedSearch;
- (id)addDuetModelID;
+ (id)builderWithKey:;
@end
