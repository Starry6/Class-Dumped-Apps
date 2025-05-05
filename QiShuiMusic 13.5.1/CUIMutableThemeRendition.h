@interface CUIMutableThemeRendition : CUIThemeRendition
- (void)dealloc;
- (void)setName:;
- (id)metrics;
- (id)key;
- (id)unslicedImage;
- (id)initWithCGImage:withDescription:forKey:;
- (id)sliceInformation;
@end
