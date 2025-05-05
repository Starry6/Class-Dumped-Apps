@interface IESLiveSaaSFeedNoticeItemModel : BDDynamicModel
@property (nonatomic) NSArray titles;
@property (nonatomic) NSArray banners;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString drawerPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemSizeInCollectionView:;
- (Class)cellClass;
@end
