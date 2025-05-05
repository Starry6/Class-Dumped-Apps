@interface RecordResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) BattleConsecutiveRecordInfo consecutiveRecord;
@property (nonatomic) BOOL hasConsecutiveRecord;
@property (nonatomic) NSMutableArray recordsArray;
@property (nonatomic) Q recordsArray_Count;
@property (nonatomic) NSString noRecordTip;
@property (nonatomic) q offset;
+ (id)descriptor;
@end
