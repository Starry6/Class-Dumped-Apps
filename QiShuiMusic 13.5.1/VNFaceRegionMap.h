@interface VNFaceRegionMap : NSObject
@property (nonatomic) NSArray regionLabels;
@property (nonatomic) Q requestRevision;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)requestRevision;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithRequestRevision:regionMap:deallocateBuffer:userBBox:alignedBBox:valueToLabelMap:;
- (id)getRegionLabels;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:;
- (id)regionNameAtImageCoordinate:imageSize:;
- (id)regionNameAtNormalizedFaceCoordinate:;
- (id)regionLabels;
- (void)setRegionLabels:;
+ (BOOL)supportsSecureCoding;
@end
