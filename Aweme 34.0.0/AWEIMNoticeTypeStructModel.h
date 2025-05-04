@interface AWEIMNoticeTypeStructModel : IESIMBaseApiModel
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) q unreadCount;
- (void)setHasUnread:;
- (long long)unreadCount;
- (void)setUnreadCount:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (BOOL)hasUnread;
+ (id)JSONKeyPathsByPropertyKey;
@end
