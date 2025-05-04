@interface AWEMessageReachSideBarNoticeInfoUpdate : NSObject
@property (nonatomic) NSString triggerSource;
@property (nonatomic) double noticeSendTime;
@property (nonatomic) NSArray unreadTemplate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)noticeSendTime;
- (void)setNoticeSendTime:;
- (id)unreadTemplate;
- (id)initWithUnreadTemplates:noticeSendTime:triggerSource:;
- (void)setUnreadTemplate:;
- (void).cxx_destruct;
- (void)setTriggerSource:;
- (id)triggerSource;
@end
