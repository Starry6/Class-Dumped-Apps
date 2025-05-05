@interface CSJUgenEventHandler : NSObject
- (void)muteVideoWithEvent:;
- (void)pauseOrPlayVideoWithEvent:;
+ (id)muteWidgetFromWidget:;
+ (id)videoWidgetFromWidget:;
@end
