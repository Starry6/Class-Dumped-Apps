@interface CoreDAVUpdateACLTaskGroup : CoreDAVTaskGroup
@property (nonatomic) NSSet aceItems;
@property (nonatomic) NSURL url;
@property (nonatomic) CoreDAVPropFindTask fetchTask;
@property (nonatomic) NSInteger state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didFinishWithError:;
- (void)taskGroupWillCancelWithError:;
- (void)startTaskGroup;
- (id)url;
- (void)setState:;
- (void)setUrl:;
- (int)state;
- (void).cxx_destruct;
- (id)initWithAccountInfoProvider:aceItems:url:taskManager:;
- (void)_startGetACL;
- (void)_startSetACLWithAccessControlEntities:;
- (void)_finishWithError:state:;
- (id)aceItems;
- (void)setAceItems:;
- (id)fetchTask;
- (void)setFetchTask:;
@end
