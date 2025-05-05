@interface QueryGiftRecordsResp_Data : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray giftRecordsArray;
@property (nonatomic) Q giftRecordsArray_Count;
@property (nonatomic) q count;
+ (id)descriptor;
@end
