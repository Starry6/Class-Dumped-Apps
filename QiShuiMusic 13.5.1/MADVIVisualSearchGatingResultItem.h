@interface MADVIVisualSearchGatingResultItem : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) NSArray domains;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)domains;
- (id)initWithNormalizedBoundingBox:andDomains:;
- (id)normalizedBoundingBox;
+ (BOOL)supportsSecureCoding;
@end
