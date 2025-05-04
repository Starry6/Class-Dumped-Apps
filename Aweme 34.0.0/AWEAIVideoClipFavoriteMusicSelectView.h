@interface AWEAIVideoClipFavoriteMusicSelectView : AWEAIVideoClipMusicSelectView
@property (nonatomic) NSMutableArray musicList;
@property (nonatomic) BOOL isFetchingMore;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) <AWEVideoPublishMusicSelectViewUserCollectedMusicDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateMusicList:;
- (void)updateCollectionViewState;
- (void)setIsFetchingMore:;
- (id)newCollectionView;
- (BOOL)isFetchingMore;
- (void)updateLoading:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (BOOL)isLoading;
- (id)delegate;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsLoading:;
- (void)updateContentInset;
@end
