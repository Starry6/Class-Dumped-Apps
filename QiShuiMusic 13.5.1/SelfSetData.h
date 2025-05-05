@interface SelfSetData : IESLivePBBaseMessage
@property (nonatomic) q rateType;
@property (nonatomic) q rate;
@property (nonatomic) BOOL rateDirectionPositive;
@property (nonatomic) NSString setDataDes;
+ (id)descriptor;
@end
