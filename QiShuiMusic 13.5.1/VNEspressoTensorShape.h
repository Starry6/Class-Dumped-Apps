@interface VNEspressoTensorShape : VNTensorShape
@property (nonatomic) Q batchNumber;
@property (nonatomic) Q channels;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
- (unsigned long long)channels;
- (unsigned long long)height;
- (unsigned long long)width;
- (unsigned long long)batchNumber;
+ (id)shapeForBlobDimensions:;
@end
