@interface HTSLiveAsyncAuthData : IESLivePBBaseMessage
@property (nonatomic) q keepAliveTime;
@property (nonatomic) q asyncAuthenticationOperate;
@property (nonatomic) q asyncAuthenticationAbType;
@property (nonatomic) q keepAliveTimeStamp;
@property (nonatomic) q buffer;
+ (id)descriptor;
@end
