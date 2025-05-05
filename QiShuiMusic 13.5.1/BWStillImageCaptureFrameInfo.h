@interface BWStillImageCaptureFrameInfo : NSObject
@property (nonatomic) Q mainFlags;
@property (nonatomic) Q sifrFlags;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (id)initWithMainFlags:sifrFlags:;
- (unsigned long long)mainFlags;
- (unsigned long long)sifrFlags;
+ (BOOL)supportsSecureCoding;
@end
