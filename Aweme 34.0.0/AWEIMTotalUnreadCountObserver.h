@interface AWEIMTotalUnreadCountObserver : NSObject
@property (nonatomic) q uid;
@property (nonatomic) NSObject<AWEIMInteractNotificationManagerProtocol> notiManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUserID:;
- (id)notiManager;
- (void)setNotiManager:;
- (long long)observingUserID;
- (void)setUid:;
- (void)dealloc;
- (long long)uid;
- (void).cxx_destruct;
@end
