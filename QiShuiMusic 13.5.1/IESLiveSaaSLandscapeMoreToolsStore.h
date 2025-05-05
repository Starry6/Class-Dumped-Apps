@interface IESLiveSaaSLandscapeMoreToolsStore : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (void)addMoreToolsItem:;
- (id)getItemModelWithItemType:;
- (void)removeMoreToolsItem:;
- (id)roomModel;
- (id)sortWithItems:;
- (void)updateRoomModel:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (BOOL)contains:;
@end
