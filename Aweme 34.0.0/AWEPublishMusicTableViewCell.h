@interface AWEPublishMusicTableViewCell : AWENewPublishTableCell
@property (nonatomic) BOOL hasMusic;
@property (nonatomic) UIButton accessButton;
@property (nonatomic) UILabel musicTitleLabel;
@property (nonatomic) BOOL autoSelectMusic;
@property (nonatomic) <AWEPublishMusicTableViewCellDelegate> delegate;
- (id)musicTitleLabel;
- (void)setMusicTitleLabel:;
- (void)addSubviewsForContentView;
- (void)setAutoSelectMusic:;
- (void)updateSelectedStateWithModel:;
- (id)accessButton;
- (void)p_updateAccessButtonWithMusicModel:;
- (void)p_updateMusicTitleLabelWithMusicModel:;
- (BOOL)autoSelectMusic;
- (void)p_updateAccessButtonViewRoateAnim;
- (void)accessButtonDidClicked:;
- (void)setAccessButton:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)hasMusic;
- (void)setHasMusic:;
+ (id)initPublishMusicCellWithModel:;
@end
