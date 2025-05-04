@interface AWELandscapeLVideoAlbumViewController : UIViewController
@property (nonatomic) UIView container;
@property (nonatomic) UIView effectView;
@property (nonatomic) AWELongVideoMultipleEpisodeView episodeView;
@property (nonatomic) AWELongVideoDataController dataController;
@property (nonatomic) AWELandscapePageContext pageContext;
@property (nonatomic) <AWELandscapeLVideoAlbumViewDelegate> delegate;
- (void)setDataController:;
- (void)updateWithPageContext:cellContext:;
- (void)showAlbumView;
- (void)dismissAlbumViewWithCompletion:;
- (id)episodeView;
- (void)setEpisodeView:;
- (void)setContainer:;
- (id)container;
- (id)init;
- (id)delegate;
- (id)effectView;
- (void)setEffectView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)setPageContext:;
- (id)pageContext;
- (id)dataController;
@end
