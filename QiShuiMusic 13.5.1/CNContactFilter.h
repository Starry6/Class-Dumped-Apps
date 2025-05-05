@interface CNContactFilter : NSObject
@property (nonatomic) NSString fullTextString;
@property (nonatomic) BOOL supportsSections;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) BOOL rankSortedResults;
- (id)initWithDictionaryRepresentation:;
- (id)predicate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)supportsSections;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)fullTextString;
- (void)setFullTextString:;
- (BOOL)rankSortedResults;
- (void)setRankSortedResults:;
@end
