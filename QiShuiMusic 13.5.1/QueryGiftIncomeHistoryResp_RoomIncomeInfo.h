@interface QueryGiftIncomeHistoryResp_RoomIncomeInfo : IESLivePBBaseMessage
@property (nonatomic) NSString rid;
@property (nonatomic) q roomStartTime;
@property (nonatomic) q roomEndTime;
@property (nonatomic) NSMutableArray memberIncomeInfosArray;
@property (nonatomic) Q memberIncomeInfosArray_Count;
@property (nonatomic) BOOL canTrans;
+ (id)descriptor;
@end
