@interface IFConcreteImage : IFImage
- (void)setMinimumSize:;
- (void)dealloc;
- (void)setValidationFlags:;
- (id)initWithCGImage:scale:placeholder:;
- (BOOL)placeholder;
- (unsigned long long)validationFlags;
- (id)CGImage;
- (void)setPlaceholder:;
- (id)minimumSize;
- (id)initWithCGImage:scale:minimumSize:placeholder:;
- (id)description;
- (id)_init;
- (double)scale;
- (id)_CGImage;
- (id)copyWithZone:;
- (id)size;
@end
