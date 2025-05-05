@interface IESLiveWalletMyCoinDataSource : NSObject
@property (nonatomic) NSDictionary trackInfo;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emptyViewForListAdapter:;
- (id)initWithTrackInfo:;
- (id)listAdapter:sectionControllerForObject:;
- (id)objectsForListAdapter:;
- (void)updateDataSourceWithItems:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (id)trackInfo;
- (void)setTrackInfo:;
@end
