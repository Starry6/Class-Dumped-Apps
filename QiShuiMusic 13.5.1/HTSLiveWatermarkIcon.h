@interface HTSLiveWatermarkIcon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q iconWidth;
@property (nonatomic) q iconType;
+ (id)descriptor;
@end
