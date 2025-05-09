@interface AWEChallengeDetailAssociatedMediaView : UIView
@property (nonatomic) AWEChallengeModel challenge;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView showMoreButtonView;
@property (nonatomic) UIImageView showMoreImageView;
@property (nonatomic) UILabel showMoreLabel;
@property (nonatomic) AWEChallengeDetailAssociatedMediaInfoPanelView infoPanelView;
@property (nonatomic) UIView<AWESearchFilmTVEpisodesProtocol> episodesView;
@property (nonatomic) NSString groupID;
- (void)p_setupUI;
- (void)setShowMoreLabel:;
- (void)setShowMoreImageView:;
- (id)showMoreLabel;
- (id)showMoreImageView;
- (void)updateWithChallenge:;
- (id)showMoreButtonView;
- (id)infoPanelView;
- (id)episodesView;
- (void)openEpisodePage:;
- (void)showMoreClicked;
- (void)openEpisodeSelectPage;
- (void)setShowMoreButtonView:;
- (void)setInfoPanelView:;
- (void)setEpisodesView:;
- (void)setGroupID:;
- (id)init;
- (id)groupID;
- (id)challenge;
- (void)setChallenge:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
