@interface RPIOSurfaceObject : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)ioSurface;
- (void)setIOSurface:;
+ (BOOL)supportsSecureCoding;
@end
