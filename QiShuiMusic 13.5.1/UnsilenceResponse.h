@interface UnsilenceResponse : IESLivePBBaseMessage
@property (nonatomic) UnSilenceRes data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
