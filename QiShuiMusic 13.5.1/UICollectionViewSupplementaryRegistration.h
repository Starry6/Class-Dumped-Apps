@interface UICollectionViewSupplementaryRegistration : NSObject
@property (nonatomic) UICollectionView _collectionViewRequestingViewWhenCreated;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) BOOL hasSupplementaryClass;
@property (nonatomic) BOOL hasSupplementaryNib;
@property (nonatomic) # supplementaryClass;
@property (nonatomic) UINib supplementaryNib;
@property (nonatomic) NSString elementKind;
@property (nonatomic) @? configurationHandler;
- (id)elementKind;
- (id)reuseIdentifier;
- (id)configurationHandler;
- (id)_collectionViewRequestingViewWhenCreated;
- (void).cxx_destruct;
- (id)initWithSupplementaryClass:supplementaryNib:elementKind:configurationHandler:reuseIdentifier:;
- (BOOL)hasSupplementaryClass;
- (BOOL)hasSupplementaryNib;
- (Class)supplementaryClass;
- (id)supplementaryNib;
+ (id)registrationWithSupplementaryClass:elementKind:configurationHandler:;
+ (id)registrationWithSupplementaryNib:elementKind:configurationHandler:;
@end
