@interface STMediaStatusDomainCameraCaptureAttribution : NSObject
@property (nonatomic) STMediaStatusDomainCameraDescriptor cameraDescriptor;
@property (nonatomic) STActivityAttribution activityAttribution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithCameraDescriptor:activityAttribution:;
- (void)encodeWithCoder:;
- (id)cameraDescriptor;
- (id)activityAttribution;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
