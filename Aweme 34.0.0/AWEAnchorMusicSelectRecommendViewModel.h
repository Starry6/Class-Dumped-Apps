@interface AWEAnchorMusicSelectRecommendViewModel : NSObject
@property (nonatomic) NSArray cellModels;
@property (nonatomic) NSMutableSet musicIDSet;
@property (nonatomic) NSString musicId;
- (void)setMusicId:;
- (id)musicId;
- (void)setCellModels:;
- (id)cellModels;
- (void)loadRecommendMusicListWithBlock:;
- (id)musicIDSet;
- (id)curUserSecUid;
- (void)setMusicIDSet:;
- (id)userID;
- (void).cxx_destruct;
@end
