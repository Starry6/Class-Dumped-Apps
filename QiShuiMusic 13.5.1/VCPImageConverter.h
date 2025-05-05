@interface VCPImageConverter : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithPixelFormat:;
- (int)resize:height:;
- (int)convertImage:yuvFrame:;
@end
