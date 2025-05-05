@interface VEMaterial : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) I texId;
@property (nonatomic) {CGSize=dd} texSize;
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) NSArray geometries;
@property (nonatomic) ^v rlInfo;
@property (nonatomic) q expectTargetType;
@property (nonatomic) BOOL isPassThrough;
- (id)texSize;
- (long long)expectTargetType;
- (id)initPixelBuffer:;
- (id)initTexId:name:texSize:;
- (BOOL)isPassThrough;
- (id)rlInfo;
- (void)setExpectTargetType:;
- (void)setGeometries:;
- (void)setIsPassThrough:;
- (void)setRlInfo:;
- (unsigned int)texId;
- (id)geometries;
- (id)pixelBuffer;
- (void).cxx_destruct;
- (id)name;
@end
