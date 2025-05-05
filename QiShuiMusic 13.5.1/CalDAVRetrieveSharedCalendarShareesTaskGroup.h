@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSURL url;
@property (nonatomic) NSSet sharees;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)startTaskGroup;
- (id)url;
- (void)setSharees:;
- (id)sharees;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:taskManager:;
- (id)initWithCalendarURL:accountInfoProvider:taskManager:;
@end
