@interface ARCameraAlignmentData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {?=[4]} cameraTransform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (double)timestamp;
- (BOOL)isEqual:;
- (void)setCameraTransform:;
- (id)cameraTransform;
+ (BOOL)supportsSecureCoding;
@end
