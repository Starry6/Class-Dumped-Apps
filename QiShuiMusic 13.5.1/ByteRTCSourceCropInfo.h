@interface ByteRTCSourceCropInfo : NSObject
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (nonatomic) double widthProportion;
@property (nonatomic) double heightProportion;
- (double)widthProportion;
- (double)heightProportion;
- (double)locationX;
- (double)locationY;
- (void)setHeightProportion:;
- (void)setLocationX:;
- (void)setLocationY:;
- (void)setWidthProportion:;
@end
