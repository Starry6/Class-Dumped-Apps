@interface BizReplyResult : IESLivePBBaseMessage
@property (nonatomic) BizReplyResult_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
