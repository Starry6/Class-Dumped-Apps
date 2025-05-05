@interface IESWKABTestManager : NSObject
@property (nonatomic) BOOL useCookiePlugin;
@property (nonatomic) BOOL useLiveVideoComponentPlugin;
- (void)setUseLiveVideoComponentPlugin:;
- (void)setUseCookiePlugin:;
- (BOOL)shouldUseCookiePlugin;
- (BOOL)shouldUseLiveVideoComponentPlugin;
- (id)init;
+ (id)sharedManager;
@end
