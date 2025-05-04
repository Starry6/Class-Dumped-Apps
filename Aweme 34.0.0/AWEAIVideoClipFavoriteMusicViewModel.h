@interface AWEAIVideoClipFavoriteMusicViewModel : NSObject
@property (nonatomic) AWEVideoPublishMusicSelectUserCollectionsReqeustManager requestManager;
@property (nonatomic) NSMutableArray musicList;
@property (nonatomic) BOOL isRefetching;
@property (nonatomic) <AWEAIVideoClipFavoriteMusicViewModelDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicList;
- (void)setMusicList:;
- (void)fetchDataWithCompletion:;
- (void)retryFetchFirstPage;
- (void)fetchNextPage:;
- (id)generateMusicListWithRspModel:;
- (BOOL)isRefetching;
- (void)setIsRefetching:;
- (BOOL)isProcessingFetchingData;
- (id)init;
- (id)delegate;
- (void)resetData;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)requestManager;
- (void)setDelegate:;
- (void)setRequestManager:;
@end
