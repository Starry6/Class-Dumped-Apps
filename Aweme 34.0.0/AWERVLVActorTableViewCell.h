@interface AWERVLVActorTableViewCell : UITableViewCell
@property (nonatomic) UILabel rolesLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWELVideoAlbumInfoModel model;
@property (nonatomic) NSArray actorList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actorList;
- (void)setActorList:;
- (id)rolesLabel;
- (void)setRolesLabel:;
- (void)setModel:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setCollectionView:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupUI;
- (void)updateWithModel:;
@end
