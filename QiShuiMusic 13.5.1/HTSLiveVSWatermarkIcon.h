@interface HTSLiveVSWatermarkIcon : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q iconWidth;
@property (nonatomic) q iconType;
@property (nonatomic) q landscapeDis;
@property (nonatomic) q verticalDis;
+ (id)descriptor;
@end
