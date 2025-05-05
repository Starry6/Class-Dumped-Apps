@interface EMQuery : EFQuery
@property (nonatomic) CSSuggestion suggestion;
- (id)suggestion;
- (void)setSuggestion:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)initWithTargetClass:predicate:sortDescriptors:suggestion:limit:queryOptions:label:;
- (BOOL)_isEqualToQuery:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
