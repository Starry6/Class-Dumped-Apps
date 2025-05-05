@interface CKContextImageSource : NSObject
@property (nonatomic) IOSurface ioSurface;
@property (nonatomic) NSData cameraIntrinsics;
@property (nonatomic) I orientation;
@property (nonatomic) q profile;
- (void)setProfile:;
- (unsigned int)orientation;
- (id)initWithCoder:;
- (long long)profile;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)initWithIOSurface:;
- (void).cxx_destruct;
- (id)ioSurface;
- (BOOL)isEqual:;
- (void)setOrientation:;
- (id)cameraIntrinsics;
- (void)setCameraIntrinsics:;
- (id)initWithIOSurface:cameraIntrinsics:;
- (void)setIoSurface:;
+ (BOOL)supportsSecureCoding;
+ (id)imageSourceForUIImage:;
@end
