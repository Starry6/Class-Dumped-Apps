@interface HTSLiveLinkmicSubtitleStatus : IESLivePBBaseMessage
@property (nonatomic) NSInteger subtitleStyle;
@property (nonatomic) double x;
@property (nonatomic) double y;
+ (id)descriptor;
@end
