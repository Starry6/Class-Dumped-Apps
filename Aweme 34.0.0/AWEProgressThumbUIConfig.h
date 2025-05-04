@interface AWEProgressThumbUIConfig : NSObject
@property (nonatomic) AWEProgressUIContainerConfig containerConfig;
@property (nonatomic) {CGSize=dd} imageSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) AWEProgressUIColorConfig borderColorConifg;
- (id)containerConfig;
- (void)setContainerConfig:;
- (id)borderColorConifg;
- (void)setBorderColorConifg:;
- (void)setBorderWidth:;
- (double)borderWidth;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setImageSize:;
- (id)imageSize;
@end
