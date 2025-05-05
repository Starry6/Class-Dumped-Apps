@interface IESLiveItemShareApi : HTSLiveApi
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
- (void)fetchItemShareListWithCompletion:;
- (void)shareItemWithItem:itemType:targetSchema:completion:;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
@end
