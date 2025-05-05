@interface MTLSharedTextureHandle : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) NSString label;
- (void)dealloc;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (id)ioSurface;
- (id)device;
- (id)initWithMachPort:;
- (id)initWithIOSurface:label:;
- (unsigned int)createMachPort;
+ (BOOL)supportsSecureCoding;
@end
