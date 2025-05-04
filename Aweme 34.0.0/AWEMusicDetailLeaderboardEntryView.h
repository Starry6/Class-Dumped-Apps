@interface AWEMusicDetailLeaderboardEntryView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel rankLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) AWEMusicDetailLeaderBoardConfig config;
@property (nonatomic) <AWEMusicDetailLeaderboardEntryViewDelegate> delegate;
- (void)updateWithRank:description:;
- (void)setConfig:;
- (id)delegate;
- (void)setDescriptionLabel:;
- (id)initWithConfig:;
- (id)config;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (void)setDelegate:;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupViews;
- (void)handleTap:;
- (id)rankLabel;
- (void)setRankLabel:;
@end
