@interface IESLiveGiftDataFetchTask : NSObject
@property (nonatomic) NSArray giftIDList;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) Q fetchScene;
@property (nonatomic) @? fetchGiftCompletion;
- (id)fetchGiftCompletion;
- (unsigned long long)fetchScene;
- (id)giftIDList;
- (id)roomModel;
- (void)setFetchGiftCompletion:;
- (void)setFetchScene:;
- (void)setGiftIDList:;
- (void)setRoomModel:;
- (void).cxx_destruct;
@end
