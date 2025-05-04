@interface AWEDetailFullNaviBarAnimator : NSObject
@property (nonatomic) <AWEDetailFullNaviBarHost> host;
@property (nonatomic) double hostNaviBarBottomOffsetY;
@property (nonatomic) UICollectionView hostCollectionView;
@property (nonatomic) UIView hostNaviBarBackgoundView;
@property (nonatomic) AWEDetailNaviBar hostNaviBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostViewDidLoad;
- (void)setHostNaviBarBottomOffsetY:;
- (void)setHostNaviBar:;
- (void)setHostCollectionView:;
- (void)setHostNaviBarBackgoundView:;
- (id)hostNaviBar;
- (id)hostCollectionView;
- (void)p_updateNaviBar;
- (id)hostNaviBarBackgoundView;
- (double)hostNaviBarBottomOffsetY;
- (void)setHost:;
- (id)host;
- (id)initWithHost:;
- (void).cxx_destruct;
@end
