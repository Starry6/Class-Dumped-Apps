@interface VETransform : NSObject
@property (nonatomic) BOOL flipX;
@property (nonatomic) BOOL flipY;
@property (nonatomic) {CGPoint=dd} offset;
@property (nonatomic) double rotateAngle;
@property (nonatomic) double extraRotateAngle;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL shouldUpdate;
- (void)setRotateAngle:;
- (id)externalMvpMatrix;
- (double)extraRotateAngle;
- (double)rotateAngle;
- (void)setExtraRotateAngle:;
- (void)setShouldUpdate:;
- (BOOL)useExternalMvpMatrix;
- (void)setOffset:;
- (id)init;
- (BOOL)flipX;
- (double)scaleFactor;
- (void)setScaleFactor:;
- (void)setFlipY:;
- (void)setFlipX:;
- (id)offset;
- (BOOL)flipY;
- (id).cxx_construct;
- (BOOL)shouldUpdate;
- (id)mvpMatrix;
@end
