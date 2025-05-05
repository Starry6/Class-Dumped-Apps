@interface CPInformationRatingItem : CPInformationItem
@property (nonatomic) NSNumber rating;
@property (nonatomic) NSNumber maximumRating;
- (id)rating;
- (id)maximumRating;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithTitle:detail:;
- (id)initWithRating:maximumRating:title:detail:;
- (void)_santizeRatingItem;
+ (BOOL)supportsSecureCoding;
@end
