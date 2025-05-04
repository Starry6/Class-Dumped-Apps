@interface AWEDPlayerElementStatusIconConfig : NSObject
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isZoomIn;
- (void)setIsMute:;
- (BOOL)isZoomIn;
- (void)setIsZoomIn:;
- (BOOL)isPlaying;
- (void)setIsPlaying:;
- (BOOL)isMute;
+ (id)configWithMuteStatus:;
+ (id)configWithPlayStatus:;
+ (id)configWithZoomStatus:;
@end
