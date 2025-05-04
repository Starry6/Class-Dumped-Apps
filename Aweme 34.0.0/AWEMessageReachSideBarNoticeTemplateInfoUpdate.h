@interface AWEMessageReachSideBarNoticeTemplateInfoUpdate : NSObject
@property (nonatomic) NSString templateID;
@property (nonatomic) q unreadCnt;
@property (nonatomic) double lastestTime;
@property (nonatomic) BOOL degraded;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (long long)unreadCnt;
- (BOOL)degraded;
- (double)lastestTime;
- (void)setUnreadCnt:;
- (void)setLastestTime:;
- (void)setDegraded:;
- (id)templateID;
- (id)extra;
- (void)setTemplateID:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
@end
