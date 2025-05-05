@interface HTSLiveCouponActivityInfoMessage : IESLivePBBaseMessage
@property (nonatomic) q activityType;
@property (nonatomic) NSString beforeText;
@property (nonatomic) NSString beforeButton;
@property (nonatomic) NSString afterText;
@property (nonatomic) NSString afterButton;
+ (id)descriptor;
@end
