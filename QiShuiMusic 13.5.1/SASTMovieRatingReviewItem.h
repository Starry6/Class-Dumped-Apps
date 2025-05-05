@interface SASTMovieRatingReviewItem : AceObject
@property (nonatomic) SAUIDecoratedText reviews;
@property (nonatomic) SASTTemplatePercentageRating templatePercentageRating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)reviews;
- (void)setReviews:;
- (id)templatePercentageRating;
- (void)setTemplatePercentageRating:;
+ (id)movieRatingReviewItem;
+ (id)movieRatingReviewItemWithDictionary:context:;
@end
