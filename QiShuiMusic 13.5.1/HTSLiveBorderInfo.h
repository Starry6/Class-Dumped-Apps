@interface HTSLiveBorderInfo : IESLivePBBaseMessage
@property (nonatomic) q borderType;
@property (nonatomic) HTSLiveStaticBorderInfo staticBorder;
@property (nonatomic) BOOL hasStaticBorder;
@property (nonatomic) HTSLiveDynamicBorderInfo dynamicBorder;
@property (nonatomic) BOOL hasDynamicBorder;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
