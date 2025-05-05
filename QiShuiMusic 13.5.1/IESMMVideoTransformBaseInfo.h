@interface IESMMVideoTransformBaseInfo : NSObject
@property (nonatomic) float xScale;
@property (nonatomic) float yScale;
@property (nonatomic) float xTranslation;
@property (nonatomic) float yTranslation;
@property (nonatomic) float rotateAngle;
@property (nonatomic) float duration;
- (void)setRotateAngle:;
- (float)rotateAngle;
- (void)setXTranslation:;
- (void)setYTranslation:;
- (float)xTranslation;
- (float)yTranslation;
- (id)init;
- (void)setDuration:;
- (id)initWithDict:;
- (float)duration;
- (id)copyWithZone:;
- (id)toDict;
- (float)xScale;
- (void)setXScale:;
- (float)yScale;
- (void)setYScale:;
@end
