@interface AWEECOMIMWebSocketUtil : NSObject
@property (nonatomic) q needWebSocketPageCount;
- (void)handleDidEnterBackgroundNotification:;
- (void)handleWillEnterForegroundNotification:;
- (void)onWSMessageDidReceive:;
- (void)subNeedWebSocketPageCount;
- (void)addNeedWebSocketPageCount;
- (long long)needWebSocketPageCount;
- (void)setNeedWebSocketPageCount:;
- (void)longConnectStateChanageNotification:;
- (id)init;
+ (id)shared;
@end
