@interface IESLiveLinkRTCInteractSourceCropInfo : NSObject
@property (nonatomic) double LocationX;
@property (nonatomic) double LocationY;
@property (nonatomic) double WidthProportion;
@property (nonatomic) double HeightProportion;
- (double)HeightProportion;
- (double)LocationX;
- (double)LocationY;
- (double)WidthProportion;
- (void)setHeightProportion:;
- (void)setLocationX:;
- (void)setLocationY:;
- (void)setWidthProportion:;
@end
