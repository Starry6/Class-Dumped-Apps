@interface AWEVoteStickerDetailViewController : UIViewController
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) AWEVoteStickerDetailHeaderView headerView;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UILabel emptyLabel;
@property (nonatomic) AWEVoteStickerManager voteStickerManager;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString itemID;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) AWEInteractionVoteStickerInfoModel voteInfo;
@property (nonatomic) BOOL shouldShowLater;
@property (nonatomic) NSNumber selectedOptionID;
@property (nonatomic) UIView baseView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)showOnView:animated:;
- (id)voteInfo;
- (void)closeBtnClicked:;
- (void)_refreshData;
- (void)_loadMoreData;
- (void)setVoteInfo:;
- (void)setSelectedOptionID:;
- (BOOL)shouldShowLater;
- (void)setShouldShowLater:;
- (BOOL)enableMutilOption;
- (void)optionViewTapped:;
- (id)selectedOptionID;
- (void)_layoutBaseView:;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (long long)currentOptionID;
- (id)voteStickerManager;
- (void)trackEnterPersonalAtIndexPath:;
- (void)setVoteStickerManager:;
- (id)itemID;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setItemID:;
- (long long)tableView:numberOfRowsInSection:;
- (id)effectView;
- (void)setBaseView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void)setEffectView:;
- (id)headerView;
- (double)baseHeight;
- (void)_reloadData;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)baseView;
- (void)setHeaderView:;
- (BOOL)darkMode;
- (void)setDarkMode:;
- (id)emptyLabel;
- (void)setEmptyLabel:;
@end
