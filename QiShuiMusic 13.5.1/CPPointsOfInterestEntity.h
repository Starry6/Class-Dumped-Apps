@interface CPPointsOfInterestEntity : CPEntity
@property (nonatomic) NSString title;
@property (nonatomic) NSArray pointsOfInterest;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)objectForIdentifier:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)pointsOfInterest;
- (void)setPointsOfInterest:;
- (id)initWithTitle:pointsOfInterest:;
+ (BOOL)supportsSecureCoding;
@end
