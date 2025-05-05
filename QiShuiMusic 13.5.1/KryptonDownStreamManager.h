@interface KryptonDownStreamManager : NSObject
- (long long)addDownStreamListenerForApp:withId:width:height:scaleMode:sourceRect:listener:;
- (id)getCanvasApp:;
- (void)removeDownStreamListenerForApp:withId:listenerId:;
+ (id)sharedInstance;
@end
