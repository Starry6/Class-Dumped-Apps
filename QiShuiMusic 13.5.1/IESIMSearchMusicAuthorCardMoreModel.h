@interface IESIMSearchMusicAuthorCardMoreModel : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString searchKeyWord;
@property (nonatomic) NSString musicIDLists;
@property (nonatomic) NSNumber musicNum;
- (id)musicIDLists;
- (id)musicNum;
- (id)searchKeyWord;
- (void)setMusicIDLists:;
- (void)setMusicNum:;
- (void)setSearchKeyWord:;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)authorName;
- (void)setAuthorName:;
@end
