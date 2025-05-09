@interface VNFaceSegments : NSObject
@property (nonatomic) Q outputBufferWidth;
@property (nonatomic) Q outputBufferHeight;
@property (nonatomic) NSData outputBufferData;
@property (nonatomic) Q numberOfFaceSegments;
@property (nonatomic) NSDictionary faceSegmentLabelToProbabilityMap;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingBox;
@property (nonatomic) Q requestRevision;
- (id)boundingBox;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)createProbabilityImageOfFaceSegment:region:normalize:error:;
- (id)initWithRequestRevision:outputBufferWidth:outputBufferHeight:outputBufferData:numberOfFaceSegments:faceSegmentBBox:faceSegmentLabelToProbabilityMap:;
- (id)createMaskImageOfFaceSegments:error:;
- (id)createProbabilityImageOfFaceSegment:error:;
- (id)_normalizeRegion:;
- (id)_makeFaceSegmentProbabilityDataImageBuffer:rect:;
- (id)_createFaceSegmentProabilityDataPixelBufferWithSize:error:;
- (void)_calculateProbabilityNormalSumsForRect:;
- (unsigned long long)outputBufferWidth;
- (unsigned long long)outputBufferHeight;
- (id)outputBufferData;
- (unsigned long long)numberOfFaceSegments;
- (id)faceSegmentLabelToProbabilityMap;
+ (BOOL)supportsSecureCoding;
+ (id)faceSegmentToSegmentMaskGrayLevelDictionary;
+ (id)faceSegmentIndexToFlagMap;
+ (unsigned long long)faceSegmentsPixelSizeInBytes;
@end
