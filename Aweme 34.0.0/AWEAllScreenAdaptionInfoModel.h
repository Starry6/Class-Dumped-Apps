@interface AWEAllScreenAdaptionInfoModel : NSObject
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) double XMin;
@property (nonatomic) double XMax;
@property (nonatomic) double YMin;
@property (nonatomic) double YMax;
- (void)setXMin:;
- (void)setXMax:;
- (void)setYMin:;
- (void)setYMax:;
- (double)XMin;
- (double)XMax;
- (double)YMin;
- (double)YMax;
- (id)init;
- (void)setHeight:;
- (void)setWidth:;
- (double)width;
- (double)height;
@end
