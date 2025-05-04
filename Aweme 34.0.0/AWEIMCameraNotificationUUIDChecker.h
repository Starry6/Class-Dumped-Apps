@interface AWEIMCameraNotificationUUIDChecker : NSObject
@property (nonatomic) NSMutableDictionary observersMap;
- (id)init;
- (void).cxx_destruct;
- (id)observersMap;
- (void)setObserversMap:;
+ (void)markAddObserver:withSessionID:;
+ (BOOL)isEnableWithSessionID:forTarget:;
+ (id)sharedManager;
@end
