@interface IESLiveHonorWallBg : IESLivePBBaseMessage
@property (nonatomic) NSString colorStart;
@property (nonatomic) NSString colorEnd;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString borderColor;
+ (id)descriptor;
@end
