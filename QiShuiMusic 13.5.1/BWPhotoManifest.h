@interface BWPhotoManifest : NSObject
@property (nonatomic) NSArray photoDescriptors;
@property (nonatomic) NSString captureRequestIdentifier;
- (void)dealloc;
- (id)photoDescriptors;
- (id)descriptorForSampleBuffer:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)descriptorForIdentifier:;
- (void)encodeWithCoder:;
- (id)initWithDescriptors:captureRequestIdentifier:;
- (id)description;
- (id)captureRequestIdentifier;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
