@interface CalDAVModifyCalendarSharingLevelTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSInteger action;
@property (nonatomic) NSURL url;
@property (nonatomic) NSInteger state;
@property (nonatomic) NSURL publishedURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (id)url;
- (void)setState:;
- (int)action;
- (void)setUrl:;
- (void)setAction:;
- (int)state;
- (void).cxx_destruct;
- (void)finishWithError:;
- (id)initWithAccountInfoProvider:taskManager:;
- (id)publishedURL;
- (void)setPublishedURL:;
- (id)initWithSharingAction:atCalendarURL:accountInfoProvider:taskManager:;
@end
