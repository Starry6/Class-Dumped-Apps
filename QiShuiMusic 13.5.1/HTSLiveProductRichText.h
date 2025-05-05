@interface HTSLiveProductRichText : IESLivePBBaseMessage
@property (nonatomic) NSInteger richType;
@property (nonatomic) HTSLiveProductRichText_Text text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveProductRichText_Image image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) HTSLiveProductRichText_CountDown countDown;
@property (nonatomic) BOOL hasCountDown;
+ (id)descriptor;
@end
