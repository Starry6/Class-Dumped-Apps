@interface ItemShareResponse : IESLivePBBaseMessage
@property (nonatomic) ItemShareResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
