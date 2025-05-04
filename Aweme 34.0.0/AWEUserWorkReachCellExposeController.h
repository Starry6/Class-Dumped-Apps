@interface AWEUserWorkReachCellExposeController : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visitFrame;
@property (nonatomic) NSMutableSet leftTopTrackSet;
@property (nonatomic) NSMutableArray showedReachArray;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSString userID;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (void)scrollViewDidEndScroll;
- (id)initWithVisitFrame:collectionView:;
- (void)didSelectedCellWithCell:;
- (void)setVisitFrame:;
- (id)leftTopComponentTrackWith:;
- (id)leftTopTrackWith:awemeModel:order:;
- (void)checkVisibleCellsShow;
- (id)showedReachArray;
- (id)visitFrame;
- (id)leftTopTrackSet;
- (void)setLeftTopTrackSet:;
- (void)setShowedReachArray:;
- (void)reloadData;
- (id)userID;
- (id)collectionView;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setUserID:;
@end
