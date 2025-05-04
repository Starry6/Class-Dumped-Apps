@interface AWEMusicPlaylistBatchManageViewModel : NSObject
@property (nonatomic) q selectCount;
@property (nonatomic) BOOL isCellRemoving;
@property (nonatomic) <AWEMusicPlaylistBatchManageViewModelDelegate> delegate;
@property (nonatomic) AWEPlaylistDataController dataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (id)initWithDataController:;
- (void)setSelectCount:;
- (long long)selectCount;
- (BOOL)isCellRemoving;
- (void)selectOrDeselectAll:;
- (void)setIsCellRemoving:;
- (void)refreshSelectCount;
- (void)didSelectAt:;
- (void)selectCountDidChange;
- (void)mangeSongListChanged;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)dataController;
@end
