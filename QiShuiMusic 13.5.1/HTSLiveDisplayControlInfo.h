@interface HTSLiveDisplayControlInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL showText;
@property (nonatomic) BOOL showIcons;
+ (id)descriptor;
@end
