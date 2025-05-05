@interface IESLiveLinkMicListResponse : IESLivePBBaseMessage
@property (nonatomic) IESLiveLinkMicListResponse_ResponseData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
