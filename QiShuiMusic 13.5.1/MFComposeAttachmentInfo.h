@interface MFComposeAttachmentInfo : MSAttachmentInfo
@property (nonatomic) BOOL isBasicImage;
@property (nonatomic) BOOL isDisplayableImage;
@property (nonatomic) NSString className;
- (id)className;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isBasicImage;
- (BOOL)isDisplayableImage;
- (id)initWithURL:filename:isBasicImage:isDisplayableImage:className:;
+ (BOOL)supportsSecureCoding;
@end
