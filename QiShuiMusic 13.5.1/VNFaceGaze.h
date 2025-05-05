@interface VNFaceGaze : NSObject
@property (nonatomic) NSUUID faceObservationUUID;
@property (nonatomic) q direction;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) {CGPoint=dd} location;
@property (nonatomic) VNPixelBufferObservation gazeMask;
@property (nonatomic) NSUUID lookedAtFaceObservationUUID;
@property (nonatomic) VNRequestSpecifier originatingRequestSpecifier;
- (long long)direction;
- (BOOL)hasLocation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)location;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)originatingRequestSpecifier;
- (id)faceObservationUUID;
- (id)lookedAtFaceObservationUUID;
- (id)gazeMask;
- (id)locationInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
@end
