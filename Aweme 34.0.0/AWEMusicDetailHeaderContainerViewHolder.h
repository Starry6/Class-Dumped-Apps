@interface AWEMusicDetailHeaderContainerViewHolder : NSObject
@property (nonatomic) UIView<AWEMusicDetailHeaderViewProtocol> headerView;
@property (nonatomic) DUXPopover favoritePopover;
@property (nonatomic) AWEMusicDetailHeaderDataHelper dataHelper;
@property (nonatomic) @? shareToStoryButtonClickHandler;
@property (nonatomic) @? didTapCollectLunaHintHandler;
@property (nonatomic) @? didShowCollectLunaHintHandler;
- (void)setupViewHolder;
- (id)dataHelper;
- (void)setDataHelper:;
- (void)setShareToStoryButtonClickHandler:;
- (void)defaultHalfScreen;
- (void)removeFavoriteHint;
- (id)favoritePopover;
- (void)setFavoritePopover:;
- (id)shareToStoryButtonClickHandler;
- (void)updateAuthorNameLabelWithTapAction:;
- (void)configEventForHeaderViewShareMusicStory;
- (void)updateCollectToLunaUI:isCollected:;
- (void)setDidTapCollectLunaHintHandler:;
- (void)setDidShowCollectLunaHintHandler:;
- (id)didTapCollectLunaHintHandler;
- (id)didShowCollectLunaHintHandler;
- (void)updateMusicTitle:;
- (id)headerView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)setHeaderView:;
@end
