@interface HTSLiveHonorIconContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString iconTitle;
+ (id)descriptor;
@end
