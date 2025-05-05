@interface IntercommunicateInviteResponse : IESLivePBBaseMessage
@property (nonatomic) IntercommunicateInviteResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IntercommunicateInviteResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
