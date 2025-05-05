@interface QueryGiftRecordsResp : IESLivePBBaseMessage
@property (nonatomic) QueryGiftRecordsResp_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
