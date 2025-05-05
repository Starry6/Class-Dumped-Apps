@interface GetTimeLimitPkRecordsResp_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray pkRecordsArray;
@property (nonatomic) Q pkRecordsArray_Count;
+ (id)descriptor;
@end
