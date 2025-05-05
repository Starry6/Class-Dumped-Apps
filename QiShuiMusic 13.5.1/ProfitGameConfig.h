@interface ProfitGameConfig : IESLivePBBaseMessage
@property (nonatomic) NSString gameAppId;
@property (nonatomic) NSString gameExtra;
+ (id)descriptor;
@end
