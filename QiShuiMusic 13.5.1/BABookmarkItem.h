@interface BABookmarkItem : NSObject
@property (nonatomic) WebBookmarkCollection collection;
@property (nonatomic) WebBookmark bookmark;
- (void)setBookmark:;
- (id)collection;
- (id)bookmark;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBookmarkCollection:bookmark:;
@end
