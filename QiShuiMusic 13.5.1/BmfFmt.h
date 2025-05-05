@interface BmfFmt : NSObject
@property (nonatomic) I pixel_buffer_fmt;
@property (nonatomic) Q tex0_fmt;
@property (nonatomic) Q tex1_fmt;
@property (nonatomic) Q tex2_fmt;
@property (nonatomic) NSInteger plane_count;
- (void)setPlane_count:;
- (int)getHeightByPlaneIndex:WithOriginHeight:;
- (int)getPlaneCount;
- (unsigned long long)getTexFormatByPlane:;
- (int)getWidthByPlaneIndex:WithOriginWidth:;
- (id)initWithCVPixelBufferFormat:;
- (unsigned int)pixel_buffer_fmt;
- (int)plane_count;
- (void)setPixel_buffer_fmt:;
- (void)setTex0_fmt:;
- (void)setTex1_fmt:;
- (void)setTex2_fmt:;
- (unsigned long long)tex0_fmt;
- (unsigned long long)tex1_fmt;
- (unsigned long long)tex2_fmt;
@end
