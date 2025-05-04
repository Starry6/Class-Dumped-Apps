@interface AWESearchMusicAuthorCardMoreModel : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString searchKeyWord;
@property (nonatomic) NSString musicIDLists;
@property (nonatomic) NSNumber musicNum;
- (id)searchKeyWord;
- (void)setSearchKeyWord:;
- (void)setMusicIDLists:;
- (void)setMusicNum:;
- (id)musicIDLists;
- (id)musicNum;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:;
@end
