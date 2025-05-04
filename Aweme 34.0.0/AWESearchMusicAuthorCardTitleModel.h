@interface AWESearchMusicAuthorCardTitleModel : NSObject
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL showSeperator;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString musicIDLists;
@property (nonatomic) NSNumber musicNum;
@property (nonatomic) BOOL hasMore;
- (BOOL)hasTracked;
- (void)setHasTracked:;
- (BOOL)showSeperator;
- (void)setShowSeperator:;
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
