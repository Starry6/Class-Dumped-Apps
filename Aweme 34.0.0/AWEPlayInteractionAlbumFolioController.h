@interface AWEPlayInteractionAlbumFolioController : AWEPlayInteractionNewBaseController
@property (nonatomic) AFDAlbumFolioView folioView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHide:;
- (void)richAwemeWillBeginDragging;
- (void)richAwemeDidEndDragging;
- (void)richContentContainerWillBeginDragging:;
- (void)richContentContainerDidEndDragging:;
- (void)setupConetext;
- (id)folioView;
- (void)updateFolioInfo;
- (id)getCurrentFolioInfo;
- (void)setFolioView:;
- (BOOL)leftContainerHasBullet;
- (BOOL)canShowRightTopFolio;
- (BOOL)canShowRightTopFolioWithNote;
- (BOOL)isSlidesAndShouldBanFolio;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;
@end
