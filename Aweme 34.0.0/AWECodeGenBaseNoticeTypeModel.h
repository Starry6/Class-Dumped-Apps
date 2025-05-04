@interface AWECodeGenBaseNoticeTypeModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) NSInteger unreadCount;
- (void)setHasUnread:;
- (int)unreadCount;
- (void)setUnreadCount:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (BOOL)hasUnread;
+ (id)JSONKeyPathsByPropertyKey;
@end
