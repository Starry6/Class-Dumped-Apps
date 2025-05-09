@interface IESInfoStickerProps : NSObject
@property (nonatomic) q stickerId;
@property (nonatomic) float angle;
@property (nonatomic) float offsetX;
@property (nonatomic) float offsetY;
@property (nonatomic) float scale;
@property (nonatomic) float alpha;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) q pinStatus;
@property (nonatomic) SrtColor srtColor;
@property (nonatomic) NSString srtFontPath;
@property (nonatomic) NSString srt;
@property (nonatomic) double srtStartTime;
- (void)setSrt:;
- (void)setSrtFontPath:;
- (id)srt;
- (long long)pinStatus;
- (void)setPinStatus:;
- (void)setSrtColor:;
- (void)setSrtStartTime:;
- (void)setStickerId:;
- (id)srtColor;
- (id)srtFontPath;
- (double)srtStartTime;
- (long long)stickerId;
- (id)init;
- (id)userInfo;
- (void)setScale:;
- (void)setStartTime:;
- (void)setAlpha:;
- (double)startTime;
- (void)setDuration:;
- (float)alpha;
- (void)setUserInfo:;
- (void).cxx_destruct;
- (float)scale;
- (float)angle;
- (double)duration;
- (void)setAngle:;
- (float)offsetX;
- (void)setOffsetX:;
- (float)offsetY;
- (void)setOffsetY:;
@end
