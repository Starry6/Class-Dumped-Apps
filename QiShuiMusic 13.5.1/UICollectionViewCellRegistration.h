@interface UICollectionViewCellRegistration : NSObject
@property (nonatomic) UICollectionView _collectionViewRequestingViewWhenCreated;
@property (nonatomic) NSString reuseIdentifier;
@property (nonatomic) BOOL hasCellClass;
@property (nonatomic) BOOL hasCellNib;
@property (nonatomic) # cellClass;
@property (nonatomic) UINib cellNib;
@property (nonatomic) @? configurationHandler;
- (id)reuseIdentifier;
- (id)initWithCellClass:cellNib:configurationHandler:reuseIdentifier:;
- (BOOL)hasCellNib;
- (id)configurationHandler;
- (id)cellNib;
- (id)_collectionViewRequestingViewWhenCreated;
- (BOOL)hasCellClass;
- (void).cxx_destruct;
- (Class)cellClass;
+ (id)registrationWithCellClass:configurationHandler:;
+ (id)registrationWithCellNib:configurationHandler:;
@end
