@interface SAMovieMovieSnippet : SAUISnippet
@property (nonatomic) SAMovieMovie movie;
@property (nonatomic) BOOL playTrailer;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setMovie:;
- (id)movie;
- (BOOL)playTrailer;
- (void)setPlayTrailer:;
+ (id)movieSnippet;
+ (id)movieSnippetWithDictionary:context:;
@end
