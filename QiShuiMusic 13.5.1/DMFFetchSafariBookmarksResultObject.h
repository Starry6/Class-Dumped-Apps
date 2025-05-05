@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject
@property (nonatomic) NSArray bookmarks;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)bookmarks;
- (id)initWithBookmarks:;
- (void)_appendDescriptionOfBookmark:toString:level:;
+ (BOOL)supportsSecureCoding;
@end
