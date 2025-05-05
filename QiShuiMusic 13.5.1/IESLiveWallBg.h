@interface IESLiveWallBg : IESLivePBBaseMessage
@property (nonatomic) NSString gradientStart;
@property (nonatomic) NSString gradientEnd;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
