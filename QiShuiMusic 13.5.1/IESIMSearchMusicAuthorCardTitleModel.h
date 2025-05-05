@interface IESIMSearchMusicAuthorCardTitleModel : NSObject
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL showSeperator;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString musicIDLists;
@property (nonatomic) NSNumber musicNum;
@property (nonatomic) BOOL hasMore;
- (BOOL)hasTracked;
- (id)musicIDLists;
- (id)musicNum;
- (void)setHasTracked:;
- (void)setMusicIDLists:;
- (void)setMusicNum:;
- (void)setShowSeperator:;
- (BOOL)showSeperator;
- (void)setHasMore:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)authorName;
- (void)setAuthorName:;
@end
