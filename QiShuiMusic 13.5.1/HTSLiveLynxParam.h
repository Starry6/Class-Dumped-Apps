@interface HTSLiveLynxParam : IESLivePBBaseMessage
@property (nonatomic) NSInteger style;
@property (nonatomic) NSString mainText;
@property (nonatomic) NSString expireDayText;
@property (nonatomic) NSString subText;
+ (id)descriptor;
@end
