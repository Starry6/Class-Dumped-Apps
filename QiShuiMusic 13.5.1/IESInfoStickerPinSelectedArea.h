@interface IESInfoStickerPinSelectedArea : NSObject
@property (nonatomic) float centerX;
@property (nonatomic) float centerY;
@property (nonatomic) float angle;
@property (nonatomic) float rectWidth;
@property (nonatomic) float rectHeight;
@property (nonatomic) BOOL isUsingSelectedPinArea;
- (BOOL)isUsingSelectedPinArea;
- (void)setIsUsingSelectedPinArea:;
- (float)angle;
- (void)setAngle:;
- (float)centerX;
- (float)centerY;
- (void)setCenterX:;
- (void)setCenterY:;
- (float)rectWidth;
- (float)rectHeight;
- (void)setRectWidth:;
- (void)setRectHeight:;
@end
