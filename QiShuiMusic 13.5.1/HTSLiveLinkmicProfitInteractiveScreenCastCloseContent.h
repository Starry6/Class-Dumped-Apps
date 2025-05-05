@interface HTSLiveLinkmicProfitInteractiveScreenCastCloseContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveInteractiveScreenCastInfo screenCastInfo;
@property (nonatomic) BOOL hasScreenCastInfo;
@property (nonatomic) NSString rtcExtInfo;
@property (nonatomic) NSString liveCoreExtInfo;
+ (id)descriptor;
@end
