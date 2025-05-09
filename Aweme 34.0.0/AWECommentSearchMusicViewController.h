@interface AWECommentSearchMusicViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWECommentMusicSearchHint searchHint;
@property (nonatomic) AWESearchBar searchBar;
@property (nonatomic) UIButton searchBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) UIViewController<AWESearchSugViewControllerProtocol> searchSugViewController;
@property (nonatomic) AWECommentSearchMusicManager searchManager;
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) AWEAVPlayerWrapper audioPlayer;
@property (nonatomic) AWEMusicModel playingMusic;
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) NSMutableArray trackedRow;
@property (nonatomic) <AWECommentSearchMusicViewControllerDelegate> delegate;
@property (nonatomic) <AWETextInputControllerProtocol> textInputController;
@property (nonatomic) BOOL isRemotePlay;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)panelHeight;
- (id)referString;
- (void)setReferString:;
- (BOOL)isRemotePlay;
- (void)setIsRemotePlay:;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:;
- (void)configureUI;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)setPlayingMusic:;
- (id)playingMusic;
- (void)playerWrapper:didChangePlayStatus:;
- (void)__clearViews;
- (id)trackedRow;
- (id)searchSugViewController;
- (void)__cancelPlayState;
- (void)__cancelAudioPlayInBackground:;
- (void)stateOfHeadphones:;
- (id)searchBtn;
- (void)__loadMoreMusic;
- (BOOL)__isIndexPathValid:;
- (void)didSelectMusicAtIndexPath:;
- (void)__clickCloseButton;
- (void)__trackCellWithIndexPath:;
- (void)audioPlayMusicWithModel:index:;
- (void)__attachSuggestView;
- (void)__searchButtonClicked;
- (void)__retrySearch;
- (void)__attachResultView;
- (void)__searchWithKeyword:isSuggest:isRetry:;
- (id)searchHint;
- (void)__attachHintViewWithEmpty:error:;
- (void)__insertMusicsToTableViewWith:;
- (void)setSearchHint:;
- (void)setSearchBtn:;
- (void)setSearchSugViewController:;
- (void)setTrackedRow:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)searchBar;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (id)delegate;
- (void)setSearchBar:;
- (void)searchBar:textDidChange:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)searchBarSearchButtonClicked:;
- (void)setLoadingView:;
- (id)textInputController;
- (void)viewDidLoad;
- (id)tableView;
- (id)loadingView;
- (void)setTextInputController:;
- (void)setTitleLabel:;
- (void)setAudioPlayer:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)audioPlayer;
- (void)viewDidAppear:;
- (id)titleLabel;
- (void)reset;
- (void)setDelegate:;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:;
- (id)searchManager;
- (void)setSearchManager:;
@end
