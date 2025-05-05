@interface CSJSDGraphicsImageRenderer : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) CSJSDGraphicsImageRendererFormat format;
@property (nonatomic) UIGraphicsImageRenderer uirenderer;
- (void)setUirenderer:;
- (id)uirenderer;
- (void)setFormat:;
- (id)format;
- (id)initWithSize:;
- (id)imageWithActions:;
- (id)initWithSize:format:;
- (void).cxx_destruct;
- (void)setSize:;
- (id)size;
@end
