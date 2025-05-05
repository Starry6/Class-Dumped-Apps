@interface EnterRecordVideoResponse : IESLivePBBaseMessage
@property (nonatomic) EnterRecordVideoResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) EnterRecordVideoResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
