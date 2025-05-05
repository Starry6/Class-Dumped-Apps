@interface DJCollectionViewVMReusableView : UICollectionReusableView
@property (nonatomic) DJCollectionViewVM collectionViewVM;
@property (nonatomic) UICollectionView parentCollectionView;
@property (nonatomic) DJCollectionViewVMSection sectionVM;
@property (nonatomic) DJCollectionViewVMReusable reusableVM;
@property (nonatomic) q sectionIndex;
@property (nonatomic) BOOL loaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)collectionViewVM;
- (id)reusableVM;
- (id)sectionVM;
- (void)setCollectionViewVM:;
- (void)setParentCollectionView:;
- (void)setReusableVM:;
- (void)setSectionVM:;
- (BOOL)loaded;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)setLoaded:;
- (void)viewDidLoad;
- (long long)sectionIndex;
- (void)setSectionIndex:;
- (void)viewDidDisappear;
- (id)parentCollectionView;
+ (id)sizeWithResuableVM:collectionViewVM:;
@end
