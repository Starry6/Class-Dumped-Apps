@interface AWEECOMIMChatListConfigModel : NSObject
@property (nonatomic) NSArray noticeGroupList;
@property (nonatomic) BOOL isNative;
@property (nonatomic) q msgUnreadCountWithinDays;
- (void)setIsNative:;
- (void)setNoticeGroupList:;
- (void)setMsgUnreadCountWithinDays:;
- (id)noticeGroupList;
- (long long)msgUnreadCountWithinDays;
- (BOOL)isNative;
- (void).cxx_destruct;
@end
