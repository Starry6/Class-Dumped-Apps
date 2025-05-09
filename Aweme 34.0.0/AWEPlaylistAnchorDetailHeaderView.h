@interface AWEPlaylistAnchorDetailHeaderView : UIView
@property (nonatomic) BDImageView coverImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel starCountLabel;
@property (nonatomic) AWECollectionButton starButton;
@property (nonatomic) AWEPlaylistDetailOwerInfoView ownerInfoView;
@property (nonatomic) UIView<AWEFoldingLabel> descLabel;
@property (nonatomic) double descFoldedHeight;
@property (nonatomic) UIView createEntryContainerView;
@property (nonatomic) UIView redDotView;
@property (nonatomic) UILabel entryTitleLabel;
@property (nonatomic) UIImageView entryArrowImageView;
@property (nonatomic) NSString coverUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString owerName;
@property (nonatomic) NSString desc;
@property (nonatomic) Q starCount;
@property (nonatomic) BOOL isStarred;
@property (nonatomic) BOOL collectBtnHidden;
@property (nonatomic) BOOL collectBtnEnable;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL canShowDesc;
@property (nonatomic) BOOL canShowCreateEntry;
@property (nonatomic) @? tapOwnerInfoBlock;
@property (nonatomic) @? tapStarBlock;
@property (nonatomic) @? tapGoLunaCollect;
@property (nonatomic) @? tapCreatePlaylistEntry;
@property (nonatomic) @? headerViewHeightDidUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setCoverUrl:;
- (id)coverUrl;
- (double)coverWidth;
- (unsigned long long)starCount;
- (void)setStarCount:;
- (void)p_setup;
- (void)labelDidUnfold:;
- (void)labelDidFold:;
- (id)redDotView;
- (void)setRedDotView:;
- (id)starCountLabel;
- (void)setStarCountLabel:;
- (void)setOwerName:;
- (id)owerName;
- (void)updateCollectButtonAccessibility;
- (void)setTapStarBlock:;
- (void)updateCollectButtonEnable:;
- (void)setTapGoLunaCollect:;
- (void)setTapOwnerInfoBlock:;
- (void)setHeaderViewHeightDidUpdate:;
- (id)tapCreatePlaylistEntry;
- (void)setTapCreatePlaylistEntry:;
- (void)updateStarCount:;
- (void)setIsStarred:;
- (void)setCollectBtnEnable:;
- (void)setCollectBtnHidden:;
- (void)setCanShowDesc:;
- (BOOL)canShowCreateEntry;
- (void)setCanShowCreateEntry:;
- (void)updateUIWithCreatePlaylistBannerHidden:;
- (double)heightWithDescription:;
- (id)ownerInfoView;
- (BOOL)collectBtnHidden;
- (id)starButton;
- (BOOL)collectBtnEnable;
- (id)p_uncollectedTitle;
- (void)p_updateStarState;
- (id)createEntryContainerView;
- (BOOL)canShowDesc;
- (void)p_updateDespLabel;
- (void)p_updateViewsConstraint;
- (void)p_updateColors;
- (double)descFoldedHeight;
- (id)p_generateFoldingAttributedString;
- (id)tapOwnerInfoBlock;
- (void)p_starTapped;
- (BOOL)p_isPlaylistAnchorGoLunaCollect;
- (id)tapGoLunaCollect;
- (id)tapStarBlock;
- (id)headerViewHeightDidUpdate;
- (void)ownerInfoTapped;
- (unsigned long long)desNumberOfLinesToFold;
- (void)starTapped;
- (id)entryTitleLabel;
- (id)entryArrowImageView;
- (void)p_didClickEntry;
- (id)p_entryTitle;
- (void)setStarButton:;
- (void)setOwnerInfoView:;
- (void)setDescFoldedHeight:;
- (void)setCreateEntryContainerView:;
- (void)setEntryTitleLabel:;
- (void)setEntryArrowImageView:;
- (id)initWithFrame:;
- (void)setDesc:;
- (id)desc;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)setNameLabel:;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (id)nameFont;
- (BOOL)isStarred;
@end
