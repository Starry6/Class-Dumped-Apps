@interface HTSLiveCastOttPermission : IESLivePBBaseMessage
@property (nonatomic) BOOL enable;
@property (nonatomic) NSString failureToast;
+ (id)descriptor;
@end
