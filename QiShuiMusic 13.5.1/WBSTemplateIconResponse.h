@interface WBSTemplateIconResponse : WBSSiteMetadataResponse
@property (nonatomic) UIImage image;
@property (nonatomic) UIImage highlightedImage;
@property (nonatomic) UIColor themeColor;
@property (nonatomic) BOOL monogram;
- (id)themeColor;
- (id)initWithURL:;
- (void).cxx_destruct;
- (id)image;
- (id)highlightedImage;
- (BOOL)isMonogram;
- (id)initWithURL:image:highlightedImage:themeColor:isMonogram:;
+ (id)responseWithURL:image:highlightedImage:themeColor:isMonogram:;
@end
