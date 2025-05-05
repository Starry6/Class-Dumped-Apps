@interface TransGiftRecordsResp : IESLivePBBaseMessage
@property (nonatomic) TransGiftRecordsResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
