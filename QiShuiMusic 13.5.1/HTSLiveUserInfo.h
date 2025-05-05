@interface HTSLiveUserInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openId;
@property (nonatomic) NSInteger level;
+ (id)descriptor;
@end
