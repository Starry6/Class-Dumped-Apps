@interface HTSLivePropDetail : IESLivePBBaseMessage
@property (nonatomic) q count;
@property (nonatomic) q billTime;
@property (nonatomic) NSString toUserNickname;
@property (nonatomic) HTSLiveImage toUserAvatar;
@property (nonatomic) BOOL hasToUserAvatar;
@property (nonatomic) NSString toOpenid;
+ (id)descriptor;
@end
