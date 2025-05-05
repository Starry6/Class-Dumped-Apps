@interface IESLiveDslTemplate : IESLivePBBaseMessage
@property (nonatomic) NSString template_p;
@property (nonatomic) NSString data_p;
@property (nonatomic) NSString templateHash;
+ (id)descriptor;
@end
