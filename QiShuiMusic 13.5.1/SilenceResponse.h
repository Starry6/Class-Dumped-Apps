@interface SilenceResponse : IESLivePBBaseMessage
@property (nonatomic) SilenceRes data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
