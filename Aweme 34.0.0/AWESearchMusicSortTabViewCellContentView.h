@interface AWESearchMusicSortTabViewCellContentView : UIView
@property (nonatomic) AWESearchMusicSortTabCustomButton listenMusicButton;
@property (nonatomic) AWESearchMusicSortTabCustomButton selectMusicButton;
@property (nonatomic) <AWESearchMusicSortTabViewDelegate> delegate;
@property (nonatomic) BOOL ishanging;
- (void)configWithModel:;
- (void)configUI;
- (id)selectMusicButton;
- (void)selectMusicButtonClicked:;
- (void)setSelectMusicButton:;
- (double)getRealScreenWidth;
- (id)listenMusicButton;
- (void)listenMusicButtonClicked:;
- (long long)currentSelectedMode;
- (BOOL)ishanging;
- (void)setIshanging:;
- (void)setListenMusicButton:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
