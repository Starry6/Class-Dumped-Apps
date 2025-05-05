@interface SFSyntheticBookmarkFolder : NSObject
@property (nonatomic) WebBookmarkList bookmarkList;
@property (nonatomic) NSString title;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithBookmarkList:title:;
- (id)bookmarkList;
- (void)setBookmarkList:;
@end
