@interface AWELandscapeMixPreloadConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) q delay_time_s;
- (long long)delay_time_s;
- (id)initWithEnable:delay_time_s:;
- (BOOL)enable;
- (id)init;
@end
