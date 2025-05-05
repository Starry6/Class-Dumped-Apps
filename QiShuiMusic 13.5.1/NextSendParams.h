@interface NextSendParams : IESLivePBBaseMessage
@property (nonatomic) q validMask;
@property (nonatomic) NSString pluginInfo;
@property (nonatomic) NSString cardName;
@property (nonatomic) NSInteger buffLevel;
+ (id)descriptor;
@end
