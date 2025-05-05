@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest
@property (nonatomic) WebBookmark bookmark;
- (id)bookmark;
- (id)initWithBookmark:iconGenerationEnabled:;
- (void).cxx_destruct;
- (id)initWithBookmark:;
- (BOOL)isEqual:;
+ (id)requestWithBookmark:iconGenerationEnabled:;
+ (id)requestWithBookmark:;
@end
