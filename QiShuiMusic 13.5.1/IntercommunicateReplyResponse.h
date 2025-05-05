@interface IntercommunicateReplyResponse : IESLivePBBaseMessage
@property (nonatomic) IntercommunicateReplyResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IntercommunicateReplyResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
