@interface AWEPluginFriendsShareViewImpl : NSObject
@property (nonatomic) NSMutableArray items;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <BDPIMPluginDelegate> imPlugin;
@property (nonatomic) NSLayoutConstraint heightConstraint;
@property (nonatomic) BDPUniqueID uniqueID;
@property (nonatomic) BDPModel model;
@property (nonatomic) NSString templateID;
@property (nonatomic) BDPShareTask shareTask;
@property (nonatomic) NSDictionary gameInfo;
@property (nonatomic) UILabel label;
@property (nonatomic) {CGSize=dd} nameSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getUniqueID;
- (id)shareTask;
- (void)setGameInfo:;
- (void)setupItems;
- (void)event:param:;
- (id)getGameInfo;
- (void)shareMessageToFriendsWithParam:;
- (void)setImPlugin:;
- (void)setNameSize:;
- (id)hg_getFriendsShareView;
- (void)requestGameInfo;
- (id)nameSize;
- (void)setShareTask:;
- (id)imPlugin;
- (id)bdp_getFriendsShareViewWithUniqueID:;
- (void)setModel:;
- (void)setLabel:;
- (id)collectionView;
- (void)dealloc;
- (id)items;
- (id)uniqueID;
- (void)setItems:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)templateID;
- (long long)numberOfSectionsInCollectionView:;
- (void)setTemplateID:;
- (id)label;
- (void)setCollectionView:;
- (void)setUniqueID:;
- (id)model;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setHeightConstraint:;
- (id)heightConstraint;
- (id)gameInfo;
+ (id)sharedPlugin;
@end
