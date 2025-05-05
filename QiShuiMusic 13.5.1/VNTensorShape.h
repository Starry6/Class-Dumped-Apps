@interface VNTensorShape : NSObject
@property (nonatomic) Q rank;
@property (nonatomic) r^Q sizes;
@property (nonatomic) Q elementCount;
- (id)initWithCoder:;
- (unsigned long long)rank;
- (id)sizes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)elementCount;
- (id)initWithSizes:count:;
- (id)initWithBatchNumber:channels:width:height:;
- (id)initWithImageChannels:width:height:;
- (id)initWithPixelFormatType:width:height:;
+ (BOOL)supportsSecureCoding;
@end
