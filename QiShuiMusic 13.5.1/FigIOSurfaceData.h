@interface FigIOSurfaceData : NSData
- (void)dealloc;
- (id)bytes;
- (id)initWithIOSurface:;
- (unsigned long long)length;
- (id)copyWithZone:;
- (id)initWithIOSurface:length:;
+ (id)dataWithIOSurface:;
+ (id)dataWithIOSurface:length:;
@end
