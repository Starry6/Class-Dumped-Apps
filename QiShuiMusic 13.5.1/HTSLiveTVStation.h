@interface HTSLiveTVStation : IESLivePBBaseMessage
@property (nonatomic) BOOL isIdle;
@property (nonatomic) NSString stateDesc;
+ (id)descriptor;
@end
