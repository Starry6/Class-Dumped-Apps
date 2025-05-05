@interface HTSLiveRoomBattleProcessSelectGuestsContent : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray guestInfosArray;
@property (nonatomic) Q guestInfosArray_Count;
+ (id)descriptor;
@end
