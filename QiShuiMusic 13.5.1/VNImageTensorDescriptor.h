@interface VNImageTensorDescriptor : VNTensorDescriptor
@property (nonatomic) I pixelFormatType;
@property (nonatomic) Q pixelWidth;
@property (nonatomic) Q pixelHeight;
@property (nonatomic) Q bytesPerRow;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)bytesPerRow;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (unsigned int)pixelFormatType;
- (id)initWithName:pixelFormatType:pixelWidth:pixelHeight:;
+ (BOOL)supportsSecureCoding;
@end
