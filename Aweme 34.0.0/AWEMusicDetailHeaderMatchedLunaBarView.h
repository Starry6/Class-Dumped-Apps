@interface AWEMusicDetailHeaderMatchedLunaBarView : UIView
@property (nonatomic) UILabel preLabel;
@property (nonatomic) UIButton songButton;
@property (nonatomic) <AWEMusicDetailHeaderMatchedLunaBarViewDelegate> delegate;
- (id)songButton;
- (id)preLabel;
- (void)p_didClickSong;
- (void)updateMatchedLunaBarView:;
- (id)p_colorWithLightColor:darkColor:;
- (void)setPreLabel:;
- (void)setSongButton:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setUpUI;
@end
