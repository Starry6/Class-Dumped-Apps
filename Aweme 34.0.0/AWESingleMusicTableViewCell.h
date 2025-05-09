@interface AWESingleMusicTableViewCell : UITableViewCell
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) double loadingAfterDelay;
@property (nonatomic) BOOL showExtraTopPadding;
@property (nonatomic) BOOL needShowPGCMusicInfo;
@property (nonatomic) BOOL showClipButton;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL isEliteVersion;
@property (nonatomic) BOOL showMore;
@property (nonatomic) AWESingleMusicView musicView;
@property (nonatomic) @? tapWhileLoadingBlock;
@property (nonatomic) @? confirmBlock;
@property (nonatomic) @? moreButtonClicked;
@property (nonatomic) @? favouriteBlock;
@property (nonatomic) @? clipBlock;
@property (nonatomic) @? enableClipBlock;
@property (nonatomic) @? promotionTagClickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (id)moreButtonClicked;
- (id)musicView;
- (void)setMusicView:;
- (void)setEnableClipBlock:;
- (id)enableClipBlock;
- (void)setMoreButtonClicked:;
- (void)setTapWhileLoadingBlock:;
- (void)setShowMore:;
- (void)setShowClipButton:;
- (BOOL)isEliteVersion;
- (void)setIsEliteVersion:;
- (BOOL)showMore;
- (BOOL)showClipButton;
- (id)tapWhileLoadingBlock;
- (id)favouriteBlock;
- (void)setFavouriteBlock:;
- (id)clipBlock;
- (void)setClipBlock:;
- (id)promotionTagClickBlock;
- (void)setPromotionTagClickBlock:;
- (id)initWithNewMusicPlayerTypeWithStyle:reuseIdentifier:newPlayer:;
- (void)setShowExtraTopPadding:;
- (void)setNeedShowPGCMusicInfo:;
- (void)setLoadingAfterDelay:;
- (void)p_didPickMusic:withFetchdAction:;
- (double)loadingAfterDelay;
- (void)singleMusicViewDidTapUse:music:;
- (void)singleMusicViewDidTapMoreButton:;
- (BOOL)singleMusicView:enableClipMusic:;
- (void)singleMusicViewDidTapClip:music:;
- (void)singleMusicViewDidTapFavouriteMusic:;
- (void)singleMusicViewDidTapUseWhileLoading;
- (void)singleMusicViewDidTapPromotionTag:music:;
- (void)configWithLoadingAfterDelay:;
- (BOOL)showExtraTopPadding;
- (BOOL)needShowPGCMusicInfo;
- (double)topPadding;
- (void)dealloc;
- (void)setLoadingView:;
- (id)loadingView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)updateTopPadding;
- (void)setupUI;
- (void)setTopPadding:;
- (void)showLoadingView;
- (void)hideLoadingView;
+ (double)heightWithMusic:baseHeight:;
@end
