@interface VCPFaceCrop : NSObject
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) s state;
- (void)setState:;
- (id)localIdentifier;
- (id)imageDimensions;
- (short)state;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithLocalIdentifier:faceCropData:;
- (id)initWithFaceCropData:originatingFace:;
- (id)faceCropData;
- (id)originatingFace;
+ (id)generateFaceCropsForFace:resourceURL:groupingIdentifier:;
@end
