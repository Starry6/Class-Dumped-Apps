@interface IFPlaceholderImage : IFImage
@property (nonatomic) IFImage image;
- (id)validationToken;
- (id)initWithImage:;
- (void)setValidationFlags:;
- (BOOL)placeholder;
- (unsigned long long)validationFlags;
- (id)CGImage;
- (void)setPlaceholder:;
- (id)minimumSize;
- (void).cxx_destruct;
- (double)scale;
- (id)image;
- (id)size;
@end
