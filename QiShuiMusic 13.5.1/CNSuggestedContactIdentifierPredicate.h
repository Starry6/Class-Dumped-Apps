@interface CNSuggestedContactIdentifierPredicate : CNPredicate
@property (nonatomic) Q suggestionIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cn_supportsNativeSorting;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)suggestionIdentifier;
- (id)sgContactMatchesWithSortOrder:mutableObjects:service:error:;
- (id)initWithSuggestionIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
