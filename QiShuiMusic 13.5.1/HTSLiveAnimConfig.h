@interface HTSLiveAnimConfig : IESLivePBBaseMessage
@property (nonatomic) BOOL isAnimSupported;
@property (nonatomic) NSInteger enterAnimType;
@property (nonatomic) NSInteger exitAnimType;
+ (id)descriptor;
@end
