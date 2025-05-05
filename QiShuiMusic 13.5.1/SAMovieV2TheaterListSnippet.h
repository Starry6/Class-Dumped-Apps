@interface SAMovieV2TheaterListSnippet : SAUISnippet
@property (nonatomic) NSArray theaterListCells;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)theaterListCells;
- (void)setTheaterListCells:;
+ (id)theaterListSnippet;
+ (id)theaterListSnippetWithDictionary:context:;
@end
