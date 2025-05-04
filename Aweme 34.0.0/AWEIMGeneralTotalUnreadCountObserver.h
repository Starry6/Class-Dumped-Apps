@interface AWEIMGeneralTotalUnreadCountObserver : AWEIMTotalUnreadCountObserver
@property (nonatomic) NSInteger newUnreadCount;
@property (nonatomic) NSDictionary cidToUnreadCountDict;
@property (nonatomic) NSInteger boxType;
@property (nonatomic) <IESIMThrottleDebounceAction> throttle;
- (int)boxType;
- (void)setBoxType:;
- (id)initWithUserID:;
- (void)setCidToUnreadCountDict:;
- (id)cidToUnreadCountDict;
- (void)setNewUnreadCount:;
- (void)__updateIMMessageCount:;
- (void)__updateIMMessageCountWithBoxType:;
- (int)newUnreadCount;
- (void)unreadCountForUser:changeTo:cidToUnreadCountDict:;
- (void)unreadCountForUser:changeTo:cidToUnreadCountDict:boxType:;
- (id)throttle;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setThrottle:;
@end
