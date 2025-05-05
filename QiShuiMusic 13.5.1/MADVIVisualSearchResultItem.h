@interface MADVIVisualSearchResultItem : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) NSArray regionAttributes;
@property (nonatomic) NSArray searchSections;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)searchSections;
- (id)initWithNormalizedBoundingBox:regionAttributes:andSearchSections:;
- (id)normalizedBoundingBox;
- (id)regionAttributes;
+ (BOOL)supportsSecureCoding;
@end
