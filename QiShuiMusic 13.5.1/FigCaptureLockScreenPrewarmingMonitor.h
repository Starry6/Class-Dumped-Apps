@interface FigCaptureLockScreenPrewarmingMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)layoutMonitor:didUpdateLayout:;
+ (void)start;
+ (void)stop;
@end
