@interface MADVITextLookupResult : MADResult
@property (nonatomic) NSArray searchSections;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSearchSections:;
- (id)searchSections;
+ (BOOL)supportsSecureCoding;
@end
