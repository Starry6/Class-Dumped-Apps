@interface AWELiveRoomClip : AWEBaseApiModel
@property (nonatomic) float orignX;
@property (nonatomic) float orignY;
@property (nonatomic) float width;
@property (nonatomic) float height;
- (float)orignX;
- (float)orignY;
- (id)liveClip;
- (void)setOrignX:;
- (void)setOrignY:;
- (void)setHeight:;
- (void)setWidth:;
- (float)width;
- (float)height;
- (id)initWithClip:;
+ (id)JSONKeyPathsByPropertyKey;
@end
