@interface GiftSendResponse : IESLivePBBaseMessage
@property (nonatomic) GiftSendResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
