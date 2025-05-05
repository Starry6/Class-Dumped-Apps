@interface PPSuggestedEventQuery : PPEventQuery
@property (nonatomic) NSSet matchingCategories;
- (void)setMatchingCategories:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)matchingCategories;
- (void).cxx_destruct;
- (id)description;
+ (BOOL)supportsSecureCoding;
@end
