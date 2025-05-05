@interface LightInfo : IESLivePBBaseMessage
@property (nonatomic) BOOL isOn;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
