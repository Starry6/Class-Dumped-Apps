@interface HTSLiveLuckyBoxMessage_ImgText : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
+ (id)descriptor;
@end
