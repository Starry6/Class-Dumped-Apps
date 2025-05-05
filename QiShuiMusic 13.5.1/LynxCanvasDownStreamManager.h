@interface LynxCanvasDownStreamManager : NSObject
- (long long)addDownStreamListenerForView:withId:width:height:AndListener:;
- (id)getKryptonApp:;
- (void)removeDownStreamListenerForView:withId:AndListenerId:;
+ (id)sharedInstance;
@end
