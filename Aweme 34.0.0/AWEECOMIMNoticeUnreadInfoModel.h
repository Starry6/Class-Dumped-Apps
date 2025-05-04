@interface AWEECOMIMNoticeUnreadInfoModel : NSObject
@property (nonatomic) q groupID;
@property (nonatomic) q unreadCount;
- (void)setGroupID:;
- (long long)unreadCount;
- (long long)groupID;
- (void)setUnreadCount:;
@end
