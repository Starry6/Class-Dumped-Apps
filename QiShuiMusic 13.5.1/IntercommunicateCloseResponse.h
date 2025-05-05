@interface IntercommunicateCloseResponse : IESLivePBBaseMessage
@property (nonatomic) IntercommunicateCloseResponse_Data data_p;
@property (nonatomic) BOOL hasData_p;
@property (nonatomic) IntercommunicateCloseResponse_Extra extra;
@property (nonatomic) BOOL hasExtra;
+ (id)descriptor;
@end
