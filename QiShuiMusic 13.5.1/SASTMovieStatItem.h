@interface SASTMovieStatItem : AceObject
@property (nonatomic) NSString contentRating;
@property (nonatomic) SASTTemplatePercentageRating reviewerRating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)contentRating;
- (void)setContentRating:;
- (id)reviewerRating;
- (void)setReviewerRating:;
+ (id)movieStatItem;
+ (id)movieStatItemWithDictionary:context:;
@end
