@interface HTSLiveLabel : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage img;
@property (nonatomic) BOOL hasImg;
+ (id)descriptor;
@end
