@interface HTSLiveTitleIcon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSInteger sizeType;
+ (id)descriptor;
@end
