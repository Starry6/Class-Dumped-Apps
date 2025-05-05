@interface SASTUserReviewItem : AceObject
@property (nonatomic) SAUIDecoratedText reviewDate;
@property (nonatomic) SAUIDecoratedText reviewText;
@property (nonatomic) SAUIDecoratedText reviewer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)reviewText;
- (id)reviewDate;
- (void)setReviewText:;
- (void)setReviewDate:;
- (id)reviewer;
- (void)setReviewer:;
+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:context:;
@end
