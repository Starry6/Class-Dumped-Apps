@interface AWEIMGroupImpl.FriendsAlbumMediaDisplayViewController : UIViewController
@property (nonatomic) @? pureModeBlock;
@property (nonatomic) @? innerScrollViewDidSingleTap;
@property (nonatomic) @? innerScrollViewEndDecelerating;
@property (nonatomic) AWEAwemeModel awemeModel;
- (void)cellDidEndDisplay:;
- (id)transitionEndView;
- (BOOL)transitionEndViewAvailable;
- (void)play;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setPureModeBlock:;
- (id)pureModeBlock;
- (id)innerScrollViewDidSingleTap;
- (void)setInnerScrollViewDidSingleTap:;
- (id)innerScrollViewEndDecelerating;
- (void)setInnerScrollViewEndDecelerating:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
