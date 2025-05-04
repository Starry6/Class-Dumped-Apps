@interface AWEMemoriesAwemeVideoCell : UICollectionViewCell
@property (nonatomic) UIViewController<AWEPlayVideoViewControllerProtocol> player;
@property (nonatomic) UIViewController parentViewController;
@property (nonatomic) AWEMemoriesPlayerTileModel tileModel;
@property (nonatomic) <AWEPlayVideoDelegate> playerDelegate;
- (void)p_setupUI;
- (id)playerDelegate;
- (void)setPlayerDelegate:;
- (id)tileModel;
- (void)setTileModel:;
- (void)p_addChildViewController;
- (void)p_removeChildViewController;
- (void)dealloc;
- (id)initWithFrame:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (id)parentViewController;
- (void)setParentViewController:;
@end
