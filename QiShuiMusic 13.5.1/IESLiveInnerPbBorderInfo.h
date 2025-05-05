@interface IESLiveInnerPbBorderInfo : GPBMessage
@property (nonatomic) q borderType;
@property (nonatomic) IESLiveInnerPbStaticBorderInfo staticBorder;
@property (nonatomic) BOOL hasStaticBorder;
@property (nonatomic) IESLiveInnerPbDynamicBorderInfo dynamicBorder;
@property (nonatomic) BOOL hasDynamicBorder;
@property (nonatomic) q duration;
+ (id)descriptor;
@end
