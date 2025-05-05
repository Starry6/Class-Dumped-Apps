@interface SunriseSunsetProvider : NSObject
@property (nonatomic) NSInteger logLevel;
- (void)cancel;
- (void)dealloc;
- (void)unregisterBlock;
- (void)setLogLevel:;
- (id)copySunsetSunriseInfoFromContext;
- (int)logLevel;
- (void)updateSunriseSunsetInfo;
- (id)initWithCallback:;
- (void)unregisterNotification;
- (void)registerBlock:;
- (id)copySunriseSunsetInfo:;
@end
