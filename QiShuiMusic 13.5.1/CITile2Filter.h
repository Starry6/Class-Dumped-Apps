@interface CITile2Filter : CITileFilter
@property (nonatomic) NSNumber inputAcuteAngle;
- (id)outputImage;
- (id)inputAcuteAngle;
- (id)_roiRect;
- (double)_roiArea;
- (id)_roiCenter;
- (id)_singlePixelImage;
- (void)setInputAcuteAngle:;
+ (id)customAttributes;
@end
