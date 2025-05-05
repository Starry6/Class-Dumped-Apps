@interface BDARVPreloadTime : NSObject
@property (nonatomic) double preloadTime;
@property (nonatomic) double showTime;
@property (nonatomic) double clickTime;
- (void)setPreloadTime:;
- (double)clickTime;
- (double)preloadTime;
- (void)setClickTime:;
- (void)setShowTime:;
- (double)showTime;
+ (double)getClickTimeForKey:;
+ (double)getPreloadTimeForKey:;
+ (id)getPreloadTimeItemForKey:;
+ (double)getShowTimeForKey:;
+ (void)savePreloadTime:forKey:;
+ (void)setClickTime:forKey:;
+ (void)setPreloadTime:forKey:;
+ (void)setShowTime:forKey:;
@end
