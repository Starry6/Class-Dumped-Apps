@interface IESLiveSaaSFeedRecordItemModel : BDDynamicModel
@property (nonatomic) IESLiveSaaSFeedScheduledModel model;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) NSString drawerPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)itemSizeInCollectionView:;
- (void)willDisplay:;
- (Class)cellClass;
@end
