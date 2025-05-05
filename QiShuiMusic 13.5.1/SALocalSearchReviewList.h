@interface SALocalSearchReviewList : AceObject
@property (nonatomic) NSURL providerId;
@property (nonatomic) NSString providerId2;
@property (nonatomic) SALocalSearchRating rating;
@property (nonatomic) NSArray selectReviews;
@property (nonatomic) NSNumber totalReviewCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rating;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:;
- (void)setRating:;
- (id)providerId2;
- (void)setProviderId2:;
- (id)selectReviews;
- (void)setSelectReviews:;
- (id)totalReviewCount;
- (void)setTotalReviewCount:;
+ (id)reviewList;
+ (id)reviewListWithDictionary:context:;
@end
