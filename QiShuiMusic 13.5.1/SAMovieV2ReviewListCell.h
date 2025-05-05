@interface SAMovieV2ReviewListCell : SADomainObject
@property (nonatomic) NSString reviewAuthor;
@property (nonatomic) NSDate reviewDate;
@property (nonatomic) NSString reviewText;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)reviewText;
- (id)reviewDate;
- (void)setReviewText:;
- (void)setReviewDate:;
- (id)reviewAuthor;
- (void)setReviewAuthor:;
+ (id)reviewListCell;
+ (id)reviewListCellWithDictionary:context:;
@end
