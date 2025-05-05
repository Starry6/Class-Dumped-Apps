@interface VEMVPTransform : VETransform
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} viewPort;
@property (nonatomic) {CGSize=dd} inSize;
@property (nonatomic) {CGSize=dd} outSize;
@property (nonatomic) q fillMode;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cropRect;
- (id)outSize;
- (id)externalMvpMatrix;
- (id)inActualSize;
- (id)inSize;
- (long long)quadData;
- (void)setInSize:;
- (void)setOutSize:;
- (void)updateExternalModelWith3x3Matrix:;
- (void)updateMatrix;
- (void)updateQuadData;
- (void)updateViewPort;
- (BOOL)useExternalMvpMatrix;
- (long long)fillMode;
- (id)init;
- (id)cropRect;
- (void)setCropRect:;
- (id).cxx_construct;
- (void)setFillMode:;
- (id)mvpMatrix;
- (id)viewPort;
- (void)setViewPort:;
@end
