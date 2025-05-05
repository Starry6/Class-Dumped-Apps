@interface HTSLivePaiedOrTimeLimitChangeContent : IESLivePBBaseMessage
@property (nonatomic) BOOL needLeave;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
