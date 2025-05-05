@interface SIIOSurfaceWrapper : NSObject
@property (nonatomic) ^{__IOSurface=} iosurface;
- (void)dealloc;
- (id)iosurface;
- (id)initWithResolution:;
- (id)initWithResolution:pixelformat:;
- (id)initWithIOSurfaceBuffer:;
- (void)setIosurface:;
- (unsigned long long)_bytesPerElement:;
@end
