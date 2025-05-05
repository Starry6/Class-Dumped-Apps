@interface APBToygerVideo : NSObject
@property (nonatomic) q width;
@property (nonatomic) q height;
@property (nonatomic) q duration;
@property (nonatomic) q bitrate;
@property (nonatomic) q fps;
@property (nonatomic) BOOL enable;
- (BOOL)enable;
- (void)setWidth:;
- (long long)bitrate;
- (long long)height;
- (void)setDuration:;
- (long long)width;
- (void)setHeight:;
- (long long)fps;
- (void)setEnable:;
- (long long)duration;
- (void)setBitrate:;
- (void)setFps:;
+ (id)defaultConfig;
@end
