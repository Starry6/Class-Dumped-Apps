@interface MADVITextLookupRequest : MADRequest
@property (nonatomic) NSString queryTerm;
@property (nonatomic) NSNumber queryID;
@property (nonatomic) NSNumber uiScale;
@property (nonatomic) NSString hintDomain;
@property (nonatomic) NSString surroundingText;
@property (nonatomic) NSArray normalizedBoundingBoxes;
- (id)queryID;
- (void)setUiScale:;
- (id)initWithCoder:;
- (void)setQueryID:;
- (id)uiScale;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)queryTerm;
- (id)hintDomain;
- (id)normalizedBoundingBoxes;
- (id)surroundingText;
- (void)setSurroundingText:;
- (void)setNormalizedBoundingBoxes:;
- (id)initWithQueryTerm:;
- (id)initWithQueryTerm:domain:textContext:;
- (void)setHintDomain:;
+ (BOOL)supportsSecureCoding;
@end
