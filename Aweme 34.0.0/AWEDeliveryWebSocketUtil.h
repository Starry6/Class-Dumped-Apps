@interface AWEDeliveryWebSocketUtil : NSObject
@property (nonatomic) q needWebSocketPageCount;
- (void)handleDidEnterBackgroundNotification:;
- (void)handleWillEnterForegroundNotification:;
- (void)subNeedWebSocketPageCount;
- (void)addNeedWebSocketPageCount;
- (void)longConnectStateChangeNotification:;
- (long long)needWebSocketPageCount;
- (void)setNeedWebSocketPageCount:;
- (id)init;
+ (id)shared;
@end
