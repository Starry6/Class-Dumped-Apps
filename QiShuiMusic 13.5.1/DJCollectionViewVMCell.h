@interface DJCollectionViewVMCell : UICollectionViewCell
@property (nonatomic) UICollectionView parentCollectionView;
@property (nonatomic) DJCollectionViewVM collectionViewVM;
@property (nonatomic) DJCollectionViewVMSection section;
@property (nonatomic) DJCollectionViewVMRow rowVM;
@property (nonatomic) q rowIndex;
@property (nonatomic) q sectionIndex;
@property (nonatomic) BOOL loaded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellDidDisappear;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (id)collectionViewVM;
- (id)rowVM;
- (void)setCollectionViewVM:;
- (void)setParentCollectionView:;
- (void)setRowVM:;
- (id)preferredLayoutAttributesFittingAttributes:;
- (void)setSection:;
- (BOOL)loaded;
- (void).cxx_destruct;
- (id)section;
- (void)setLoaded:;
- (void)setRowIndex:;
- (long long)rowIndex;
- (long long)sectionIndex;
- (void)setSectionIndex:;
- (id)parentCollectionView;
+ (id)sizeWithRow:collectionViewVM:;
@end
