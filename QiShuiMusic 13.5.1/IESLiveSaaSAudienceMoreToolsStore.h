@interface IESLiveSaaSAudienceMoreToolsStore : NSObject
@property (nonatomic) NSArray items;
@property (nonatomic) NSDictionary matchToolbarDic;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
- (id)matchToolbarDic;
- (void)addMoreToolsItem:;
- (id)getItemModelWithItemType:;
- (void)removeMoreToolsItem:;
- (id)roomModel;
- (void)setMatchToolbarDic:;
- (id)sortWithItems:;
- (void)updateRoomModel:;
- (id)init;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (BOOL)contains:;
@end
