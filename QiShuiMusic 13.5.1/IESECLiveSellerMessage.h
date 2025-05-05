@interface IESECLiveSellerMessage : GPBMessage
@property (nonatomic) NSInteger msgType;
@property (nonatomic) IESECAuthorOrderLimitInfo authorOrderLimitInfo;
@property (nonatomic) BOOL hasAuthorOrderLimitInfo;
@property (nonatomic) NSMutableArray listRoomStatsDataArray;
@property (nonatomic) Q listRoomStatsDataArray_Count;
+ (id)descriptor;
@end
