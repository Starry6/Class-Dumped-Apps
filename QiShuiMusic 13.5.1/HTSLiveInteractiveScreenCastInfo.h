@interface HTSLiveInteractiveScreenCastInfo : IESLivePBBaseMessage
@property (nonatomic) NSString itemAppId;
@property (nonatomic) NSInteger itemType;
+ (id)descriptor;
@end
