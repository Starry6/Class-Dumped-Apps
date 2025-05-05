@interface ARFaceData : NSObject
@property (nonatomic) NSArray detectedFaces;
@property (nonatomic) NSDictionary faceMeshPayload;
@property (nonatomic) BOOL mirrored;
- (id)init;
- (void)setMirrored:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isMirrored;
- (BOOL)isEqual:;
- (id)detectedFaces;
- (void)setDetectedFaces:;
- (id)initWithMetadataObjects:mirroredVideoInput:stripDetectionData:;
- (id)faceMeshPayload;
- (void)setFaceMeshPayload:;
+ (BOOL)supportsSecureCoding;
@end
