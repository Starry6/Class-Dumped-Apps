@interface ARAppClipCodeResultData : NSObject
@property (nonatomic) NSDictionary trackedAppClipCodes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)anchorsForCameraWithTransform:referenceOriginTransform:existingAnchors:anchorsToRemove:;
- (id)trackedAppClipCodes;
- (void)setTrackedAppClipCodes:;
+ (BOOL)supportsSecureCoding;
@end
