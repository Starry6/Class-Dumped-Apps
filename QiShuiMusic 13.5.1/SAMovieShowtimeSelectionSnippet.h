@interface SAMovieShowtimeSelectionSnippet : SAUISnippet
@property (nonatomic) SAMovieMovie movie;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setMovie:;
- (id)movie;
+ (id)showtimeSelectionSnippet;
+ (id)showtimeSelectionSnippetWithDictionary:context:;
@end
