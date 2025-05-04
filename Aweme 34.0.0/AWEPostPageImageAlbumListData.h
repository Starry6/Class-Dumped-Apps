@interface AWEPostPageImageAlbumListData : NSObject
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) <AWEPostPageAnchorService> anchorService;
@property (nonatomic) <AWEPostPageMatchMissionService> matchMission;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorService;
- (void)bindServices:;
- (id)listData;
- (void)configSection:atIndex:;
- (void)setAnchorService:;
- (id)matchMission;
- (void)setMatchMission:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)anchorArray;
@end
