@interface PFPosterEditConfiguration : NSObject
@property (nonatomic) Q version;
@property (nonatomic) PFParallaxLayerStyle style;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedVisibleFrame;
@property (nonatomic) BOOL isPerspectiveZoomEnabled;
@property (nonatomic) BOOL isDepthEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)analyticsPayload;
- (id)init;
- (void)setVersion:;
- (unsigned long long)version;
- (void)setStyle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)style;
- (id)copyWithZone:;
- (BOOL)isPerspectiveZoomEnabled;
- (BOOL)isDepthEnabled;
- (id)normalizedVisibleFrame;
- (void)setNormalizedVisibleFrame:;
- (void)setIsPerspectiveZoomEnabled:;
- (void)setIsDepthEnabled:;
+ (BOOL)supportsSecureCoding;
@end
