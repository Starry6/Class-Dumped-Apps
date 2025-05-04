@interface AWEIMChatListServiceUnreadCountUpdateModel : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) q totalUnreadCount;
@property (nonatomic) q serviceType;
- (void)setTotalUnreadCount:;
- (long long)totalUnreadCount;
- (void)setUid:;
- (id)uid;
- (id)description;
- (long long)serviceType;
- (void).cxx_destruct;
- (void)setServiceType:;
@end
