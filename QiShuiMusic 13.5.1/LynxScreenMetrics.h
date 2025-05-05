@interface LynxScreenMetrics : NSObject
@property (nonatomic) {CGSize=dd} screenSize;
@property (nonatomic) double scale;
- (id)initWithScreenSize:scale:;
- (void)setLynxScreenSize:;
- (id)init;
- (void)setScale:;
- (id)screenSize;
- (double)scale;
- (void)setScreenSize:;
+ (id)getDefaultLynxScreenMetrics;
@end
