@interface ReplyResponse : IESLivePBBaseMessage
@property (nonatomic) ReplyResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) ReplyResponse_ReplyExtra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
