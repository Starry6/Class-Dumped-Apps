@interface HTSLiveDoodleTemplate : IESLivePBBaseMessage
@property (nonatomic) q templateId;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
+ (id)descriptor;
@end
