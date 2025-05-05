@interface HTSLiveImage_Content : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString fontColor;
@property (nonatomic) q level;
@property (nonatomic) NSString alternativeText;
+ (id)descriptor;
@end
