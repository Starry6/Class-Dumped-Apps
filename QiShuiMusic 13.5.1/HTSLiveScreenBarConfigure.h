@interface HTSLiveScreenBarConfigure : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSInteger isDynamicImg;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString jumpPrompt;
+ (id)descriptor;
@end
