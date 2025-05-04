@interface AWETokamakOptFix : NSObject
@property (nonatomic) BOOL isBackground;
- (void)threadOpt;
- (void)fixFileAPI;
- (void)fixVolumeWatchdog;
- (BOOL)isBackground;
- (void)setIsBackground:;
+ (void)execute;
+ (id)shared;
@end
