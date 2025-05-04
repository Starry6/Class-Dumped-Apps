@interface AWEVideoDescCardPlayerAdaptionInfoModel : NSObject
@property (nonatomic) q adaptionType;
@property (nonatomic) double offsetY;
@property (nonatomic) double newFrameWidth;
@property (nonatomic) double newFrameHeight;
- (long long)adaptionType;
- (double)newFrameWidth;
- (double)newFrameHeight;
- (void)setAdaptionType:;
- (void)setNewFrameWidth:;
- (void)setNewFrameHeight:;
- (double)offsetY;
- (void)setOffsetY:;
@end
