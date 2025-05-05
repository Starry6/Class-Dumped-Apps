@interface HTSLivePublicScreenSpeedConf : IESLivePBBaseMessage
@property (nonatomic) q updateInterval;
@property (nonatomic) NSInteger scrollSize;
@property (nonatomic) NSInteger foldSize;
@property (nonatomic) NSInteger scrollSpeed;
+ (id)descriptor;
@end
