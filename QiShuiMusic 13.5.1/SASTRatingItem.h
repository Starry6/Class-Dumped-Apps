@interface SASTRatingItem : AceObject
@property (nonatomic) SASTTemplateRating rating;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rating;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setRating:;
+ (id)ratingItem;
+ (id)ratingItemWithDictionary:context:;
@end
