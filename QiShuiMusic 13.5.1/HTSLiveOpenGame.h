@interface HTSLiveOpenGame : IESLivePBBaseMessage
@property (nonatomic) NSString streamId;
@property (nonatomic) NSString appId;
+ (id)descriptor;
@end
