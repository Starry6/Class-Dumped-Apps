@interface SAMovieV2ReviewListSnippet : SAUISnippet
@property (nonatomic) NSString movieName;
@property (nonatomic) SALocalSearchReviewList reviewList;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)movieName;
- (void)setMovieName:;
- (id)reviewList;
- (void)setReviewList:;
+ (id)reviewListSnippet;
+ (id)reviewListSnippetWithDictionary:context:;
@end
