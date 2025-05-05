@interface QueryPopularCardResponse : IESLivePBBaseMessage
@property (nonatomic) QueryPopularCardResponse_CardInfo data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
