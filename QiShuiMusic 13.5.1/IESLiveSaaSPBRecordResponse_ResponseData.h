@interface IESLiveSaaSPBRecordResponse_ResponseData : GPBMessage
@property (nonatomic) IESLiveSaaSPBBattleConsecutiveRecordInfo consecutiveRecord;
@property (nonatomic) BOOL hasConsecutiveRecord;
@property (nonatomic) NSMutableArray recordsArray;
@property (nonatomic) Q recordsArray_Count;
@property (nonatomic) NSString noRecordTip;
+ (id)descriptor;
@end
