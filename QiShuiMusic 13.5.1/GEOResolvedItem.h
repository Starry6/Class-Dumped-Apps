@interface GEOResolvedItem : NSObject
@property (nonatomic) BOOL hasResultIndex;
@property (nonatomic) Q resultIndex;
@property (nonatomic) NSString extractedTerm;
@property (nonatomic) NSInteger itemType;
- (int)itemType;
- (BOOL)hasResultIndex;
- (void).cxx_destruct;
- (unsigned long long)resultIndex;
- (id)initWithResolvedItem:;
- (id)initWithAutocompleteResolvedItem:;
- (id)extractedTerm;
@end
