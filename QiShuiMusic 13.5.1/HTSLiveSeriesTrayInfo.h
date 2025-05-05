@interface HTSLiveSeriesTrayInfo : IESLivePBBaseMessage
@property (nonatomic) q duration;
@property (nonatomic) HTSLiveImage staticImg;
@property (nonatomic) BOOL hasStaticImg;
@property (nonatomic) HTSLiveImage dynamicImg;
@property (nonatomic) BOOL hasDynamicImg;
+ (id)descriptor;
@end
