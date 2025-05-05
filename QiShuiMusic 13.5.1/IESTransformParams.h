@interface IESTransformParams : NSObject
@property (nonatomic) Q fillMode;
@property (nonatomic) double scale;
@property (nonatomic) double rotateAngle;
@property (nonatomic) double translateX;
@property (nonatomic) double translateY;
@property (nonatomic) BOOL filpX;
@property (nonatomic) BOOL filpY;
- (void)setRotateAngle:;
- (BOOL)filpX;
- (BOOL)filpY;
- (double)rotateAngle;
- (void)setFilpX:;
- (void)setFilpY:;
- (void)setTranslateX:;
- (void)setTranslateY:;
- (double)translateX;
- (double)translateY;
- (unsigned long long)fillMode;
- (id)init;
- (void)setScale:;
- (double)scale;
- (void)setFillMode:;
@end
